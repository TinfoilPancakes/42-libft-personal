# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ppatil <ppatil@student.42.us.org>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/09/23 12:56:18 by ppatil            #+#    #+#              #
#    Updated: 2016/10/28 22:37:36 by ppatil           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a

CC=cc

# WARNING: Do not submit with -O flags to moulinette.

C_FLAGS=-Wall -Wextra -Werror

SRC_DIR=./

OBJ_DIR=./build/

INC_DIR=./

# Memory tools section.
C_FILES =	ft_bzero.c \
			ft_memset.c \
			ft_memchr.c \
			ft_memcpy.c \
			ft_memcmp.c \
			ft_memrcpy.c \
			ft_memccpy.c \
			ft_memmove.c \
			ft_memalloc.c \
			ft_memdel.c

# Math Tools section.
C_FILES +=	ft_abs.c \
			ft_count_digits.c

# I/O Tools section.
C_FILES +=	ft_putchar.c \
			ft_putchar_fd.c \
			ft_putstr.c \
			ft_putstr_fd.c \
			ft_putendl.c \
			ft_putendl_fd.c \
			ft_putnbr.c \
			ft_putnbr_fd.c \
			ft_putnbr_generic.c

# String tools section.
C_FILES +=	ft_strlen.c \
			ft_strcpy.c \
			ft_strncpy.c \
			ft_strcat.c \
			ft_strncat.c \
			ft_strlcat.c \
			ft_strdup.c \
			ft_strchr.c \
			ft_strrchr.c \
			ft_strcmp.c \
			ft_strncmp.c \
			ft_strstr.c \
			ft_strnstr.c \
			ft_strnew.c \
			ft_strdel.c \
			ft_strmap.c \
			ft_strmapi.c \
			ft_strclr.c \
			ft_strsub.c \
			ft_strjoin.c \
			ft_strtrim.c \
			ft_strsplit.c \
			ft_striter.c \
			ft_striteri.c \
			ft_strequ.c \
			ft_strnequ.c \
			ft_isspace.c \
			ft_isalpha.c \
			ft_isdigit.c \
			ft_isalnum.c \
			ft_isascii.c \
			ft_isprint.c \
			ft_toupper.c \
			ft_tolower.c \
			ft_itoa.c \
			ft_itoa_generic.c \
			ft_atoi.c \
			ft_atoi_generic.c

# Knuth Morris Pratt String searching section.
C_FILES +=	kmp_strstr.c \
			kmp_strnstr.c \
			kmp_generate_table.c

# Single Link List section.
C_FILES +=	ft_lstnew.c \
			ft_lstadd.c \
			ft_lstiter.c \
			ft_lstmap.c \
			ft_lstdel.c \
			ft_lstdelone.c

# Vector (aka: Resizable Array) section.
C_FILES +=	ft_vec_append.c \
			ft_vec_at.c \
			ft_vec_copy.c \
			ft_vec_del.c \
			ft_vec_move.c \
			ft_vec_new.c \
			ft_vec_newn.c \
			ft_vec_pop.c \
			ft_vec_pop_s.c \
			ft_vec_resize.c

# Algorithms (heapsort, swap etc...) section.
C_FILES +=	ft_swap.c \
			ft_heapsort.c \
			reheap_up.c \
			reheap_down.c

SOURCES=$(addprefix $(SRC_DIR), $(C_FILES))

INCLUDES=$(addprefix -I, $(INC_DIR))

OBJECTS=$(addprefix $(OBJ_DIR), $(patsubst %.c, %.o, $(C_FILES)))

default : all

test : $(NAME)
	$(MAKE) -C ./test/ re
	./test/test.out

all : $(NAME)

$(NAME) : $(OBJ_DIR) $(OBJECTS)
	@echo "Archiving object files..."
	@ar rc $(NAME) $(OBJECTS)
	@echo "Done."
	@echo "Indexing..."
	@ranlib $(NAME)
	@echo "Done."

$(OBJ_DIR) :
	@echo "Creating build directory..."
	@mkdir -p $(OBJ_DIR)
	@echo "Done."

$(OBJ_DIR)%.o : $(SRC_DIR)%.c
	$(CC) $(C_FLAGS) -c $< -o $@ $(INCLUDES)

fclean : clean
	@echo "Removing $(NAME)..."
	@rm -rf $(NAME)
	@echo "Done."

clean :
	@echo "Cleaning last build..."
	@rm -rf $(OBJ_DIR)
	@echo "Done."

re : fclean all


.PHONY : clean fclean re test
