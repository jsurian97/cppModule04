# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jsurian42 <jsurian@student.42lausanne.ch>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/24 12:08:42 by jsurian42         #+#    #+#              #
#    Updated: 2026/03/10 17:56:31 by jsurian42        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := IDontWantToSetTheWorldOnFire

SOURCES := \
		   src/main.cpp\
		   src/Animal.cpp\
		   src/Cat.cpp\
		   src/Dog.cpp \
		   src/WrongAnimal.cpp\
		   src/WrongCat.cpp \
		   src/Brain.cpp

#################################
.DEFAULT_GOAL := all

CC			:= c++
CPPFLAGS	:= -Iincludes
CFLAGS 		:= -g -Wall -Werror -Wextra -std=c++98
#CPPFLAGS	:= -Iincludes

OBJETS := $(SOURCES:%.cpp=%.o)

.INTERMEDIATE:	$(OBJETS)

$(NAME) : $(OBJETS)
	$(CC) $(CFLAGS) $(CPPFLAGS) $(OBJETS) $(LDFLAGS) -o $(NAME)

.PHONY: all
all: $(NAME)

.PHONY: clean
clean:
	$(RM) *.o

.PHONY: fclean
fclean: clean
	$(RM) $(NAME)

.PHONY: re
re: fclean all
