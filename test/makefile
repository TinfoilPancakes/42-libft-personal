# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ppatil <ppatil@student.42.us.org>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/10/30 13:26:06 by ppatil            #+#    #+#              #
#    Updated: 2016/10/30 13:26:06 by ppatil           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = test.out

CC = cc

C_FLAGS = -Wall -Wextra -Werror

C_FILES = main.c

INCLUDE_DIRS = ../

LIB_DIRS = ../

LIB_NAMES = ft

all : $(NAME)

$(NAME) : $(C_FILES)
	$(CC) $(C_FLAGS) -o $(NAME) $(C_FILES) \
	-I $(INCLUDE_DIRS) \
	-L $(LIB_DIRS) \
	-l $(LIB_NAMES)

clean :
	rm -f $(NAME)

re : clean all
