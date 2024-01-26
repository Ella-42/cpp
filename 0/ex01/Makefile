# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/20 02:14:32 by lpeeters          #+#    #+#              #
#    Updated: 2024/01/26 14:26:17 by lpeeters         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

program_name = Hello?

compiler = c++

compilation_flags = -g -Wall -Werror -Wextra -std=c++98

source_files = ${shell find ./ -name "*.cpp"}

header_files = ${shell find ./ -name "*.hpp" -o -name "*.h"}

header_includes = ${sort ${foreach header_path,${header_files},-I ${dir ${header_path}}}}

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

# Build dependency
program: ${program_name}

# Build the executable
${program_name}: ${source_files} ${header_files}
	@echo "${yellow}compiling into executable...${white}"
	@printf "${up}${clear}"
	@if [ ! -e "${program_name}" ] && [ ! -d "${object_directory}" ]; then \
		${compiler} ${compilation_flags} ${source_files} ${header_includes} -o ${program_name}; \
		if [ $$? -ne 0 ] || [ ! -e "${program_name}" ]; then \
			echo "${red}error compiling executable${white}"; \
		else \
			echo "${green}done compiling executable${white}"; \
		fi \
	else \
		make -s obj; \
		${compiler} ${compilation_flags} ${object_files} -o ${program_name}; \
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
	@${compiler} ${compilation_flags} -c $< ${header_includes} -o $@
	@if [ "./${<:%.cpp=%.o}" = "${lastword ${source_files:%.cpp=%.o}}" ]; then \
		if [ $$? -ne 0 ]; then \
			echo "${red}error compiling object files${white}"; \
		else \
			echo "${green}done compiling object files${white}"; \
		fi \
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
.PHONY: program obj clean fclean re
