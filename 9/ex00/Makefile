# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/20 02:14:32 by lpeeters          #+#    #+#              #
#    Updated: 2024/07/09 08:34:16 by lpeeters         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

program_name = btc

compiler = c++

compilation_flags = -g -Wall -Werror -Wextra

project_flags = -std=c++98

source_files = ${foreach found_file,${shell find . -name "*.cpp"},${found_file:./%=%}}

header_files = ${foreach found_file,${shell find . -name "*.h" -o -name "*.hpp" -o -name "*.tpp"},${found_file:./%=%}}

header_directories = ${sort ${foreach header_path,${header_files},${dir ${header_path}}}}

header_includes = ${foreach header_directory,${header_directories},-I ${header_directory}}

object_directory = objects/

make_object_directory = mkdir -p ${@D}

object_files = ${source_files:%.cpp=${object_directory}%.o}

force_remove = rm -rf

# Color codes for printing colorful text
white = \033[0;39m
yellow = \033[38;5;226m
green = \033[0;92m
red = \033[0;31m

# Move the cursor up one line
up = \033[A

# Erase the current line on the cursor
clear = \033[K

# Build dependencies
program: ${program_name}

# Build executable
${program_name}: ${source_files} ${header_files}
	@echo "${yellow}compiling into executable...${white}"
	@printf "${up}${clear}"
	@if [ ! -e "${program_name}" ] && [ ! -d "${object_directory}" ]; then \
		${compiler} ${compilation_flags} ${project_flags} ${source_files} ${header_includes} -o ${program_name}; \
		if [ $$? -ne 0 ] || [ ! -e "${program_name}" ]; then \
			echo "${red}error compiling executable${white}"; \
		else \
			echo "${green}done compiling executable${white}"; \
		fi \
	else \
		make -s obj; \
		${compiler} ${compilation_flags} ${project_flags} ${object_files} -o ${program_name}; \
		if [ $$? -ne 0 ] || [ ! -e "${program_name}" ]; then \
			echo "${red}error compiling object files${white}"; \
		else \
			echo "${green}done compiling executable${white}"; \
		fi \
	fi

# Create object files
obj: ${object_files}

# Compile object files
${object_directory}%.o: %.cpp ${header_files}
	@${make_object_directory}
	@echo "${yellow}compiling $< into an object file...${white}"
	@if [ $$? -eq 0 ]; then \
		printf "${up}${clear}"; \
	fi
	@${compiler} ${compilation_flags} ${project_flags} -c $< ${header_includes} -o $@
	@if [ $$? -ne 0 ]; then \
		echo "${red}error compiling object files${white}"; \
	elif [ "${<:%.cpp=%.o}" = "${lastword ${source_files:%.cpp=%.o}}" ]; then \
		echo "${green}done compiling object files${white}"; \
	fi

# If they exist, remove unecessary files for the final product
clean:
	@if [ -d "${object_directory}" ]; then \
		echo "${red}removing object files...${white}"; \
		${force_remove} ${object_directory}; \
	else \
		echo "make: No object files to be cleaned."; \
	fi

# Remove everything that was created by this makefile
fclean: clean
	@if [ -e "${program_name}" ]; then \
		echo "${red}removing executable...${white}"; \
		${force_remove} ${program_name}; \
	else \
		echo "make: No executable to be cleaned."; \
	fi

# Remove everything that was created, then build once more
re: fclean program

# Targets
.PHONY: compile_makefiles program obj clean fclean re
