# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jchen <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/24 15:49:43 by jchen             #+#    #+#              #
#    Updated: 2015/12/19 12:31:10 by jchen            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

OBJET_NAME = $(SRC_NAME:.c=.o)
CC = gcc 
FLAGS = -Wall -Wextra -Werror
NAME = libft.a
SRC_NAME = ft_lstprint.c \
	ft_lststrsplit.c ft_cut_str.c ft_strpush.c ft_mallocncopy.c \
	ft_lstcount.c \
	ft_lstpush.c ft_lstmap.c ft_lstiter.c ft_lstadd.c ft_lstdel.c \
	ft_lstdelone.c ft_lstnew.c \
	ft_isdigit.c ft_memcmp.c ft_putchar_fd.c \
	ft_putstr_fd.c ft_strdel.c ft_strlcat.c ft_strncpy.c ft_strstr.c \
	ft_atoi.c ft_isprint.c ft_memcpy.c ft_putendl.c ft_strcat.c  ft_strdup.c \
	ft_strlen.c ft_strnequ.c ft_strsub.c ft_bzero.c  ft_itoa.c ft_memdel.c \
	ft_putendl_fd.c ft_strchr.c ft_strequ.c ft_strmap.c ft_strnew.c \
	ft_strtrim.c  ft_isalnum.c ft_memalloc.c ft_memmove.c  ft_putnbr.c \
	ft_strclr.c  ft_striter.c  ft_strmapi.c ft_strnstr.c  ft_tolower.c \
	ft_isalpha.c  ft_memccpy.c  ft_memset.c  ft_putnbr_fd.c  ft_strcmp.c \
	ft_striteri.c  ft_strncat.c  ft_strrchr.c  ft_toupper.c  ft_isascii.c \
	ft_memchr.c  ft_putchar.c ft_putstr.c  ft_strcpy.c  ft_strjoin.c \
	ft_strncmp.c  ft_strsplit.c ft_itoa_unsigned.c ft_itoa_unsigned_long.c \
	ft_itoa_long.c  ft_itoa_base.c ft_itoa_base_oct.c ft_itoa_base_oct_l.c \
	ft_itoa_base_l.c ft_itoa_base_p.c ft_strlen_wchar.c ft_itoa_base_char.c\

all: $(NAME)

$(NAME) :
	$(CC) -c $(SRC_NAME) $(FLAGS)
	ar r $(NAME) $(OBJET_NAME)
	ranlib $(NAME)

clean:
	rm -rf $(SRC_NAME:.c=.o)

fclean: clean
	rm -rf $(NAME);

re: fclean all
