# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/20 02:14:32 by lpeeters          #+#    #+#              #
#    Updated: 2024/01/20 08:09:51 by lpeeters         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

program_name = megaphone

compiler = c++

compilation_flags = -g -Wall -Werror -Wextra -std=c++98

source_files = ${shell find ./ -name "*.cpp"}

object_directory = objects/

make_object_directory = mkdir -p ${@D}

object_files = ${source_files:%.cpp=${object_directory}%.o}

force_remove = rm -rf

# colors
white = \033[0;39m
yellow = \033[38;5;226m
green = \033[0;92m
red = \033[0;31m

# move the cursor up one line
up = \033[A

# erase the current line on the cursor
clear = \033[K

# build dependency
program: ${program_name}

# build the executable
${program_name}: ${source_files}
	@echo "${yellow}compiling into executable...${white}"
	@printf "${up}${clear}"
	@${compiler} ${compilation_flags} $^ -o ${program_name}
	@echo "${green}done compiling executable${white}"

# create object files
obj: ${object_files}

# compile object files
${object_directory}%.o: %.cpp
	@${make_object_directory}
	@echo "${yellow}compiling $< into an object file...${white}"
	@${compiler} ${compilation_flags} -c $< -o $@
	@printf "${up}${clear}"
	@if [ "${<:%.cpp=%.o}" = "${lastword ${notdir ${object_files}}}" ]; then \
		echo "${green}done compiling object files${white}"; \
	fi

# if they exist, remove unecessary files for the final product
clean:
	@if [ -d "${object_directory}" ]; then \
		echo "${red}removing object files...${white}"; \
		${force_remove} ${object_directory}; \
	fi

# remove everything that may be created by this makefile
fclean: clean
	@if [ -e "${program_name}" ]; then \
		echo "${red}removing executable...${white}"; \
		${force_remove} ${program_name}; \
	fi

# remove everything, then build once more
re: fclean program

#targets
.PHONY: program obj clean fclean re
