#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: skavunen <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/01 17:32:33 by skavunen          #+#    #+#              #
#    Updated: 2017/11/08 20:26:25 by skavunen         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = serializer

SRCS =	main.cpp

CPP = clang++
CC_FLAGS = -Wall -Werror -Wextra

OBJ = $(SRCS:.cpp=.o)

NOC=\033[0m
OKC=\033[32;05m
ERC=\033[31m
WAC=\033[33m

all: $(NAME)

$(NAME): $(OBJ)
	@echo "$(OKC)$(NAME): Compiling objectives $(NAME)$(NOC)"
	@$(CPP) $(CC_FLAGS) -o $(NAME) $(OBJ) -lncurses
	@echo "$(OKC)$(NAME): Compilation success!$(NOC)"

%.o: %.cpp
	@$(CPP) $(CC_FLAGS) -o $@ -c $^

clean:
	@rm -rf $(OBJ)
	@echo "$(WAC)$(NAME): Removing $(NAME) objectives$(NOC)"

fclean: clean
	@rm -f $(NAME)
	@echo "$(WAC)$(NAME): Removing executable$(NOC)"

re: fclean all