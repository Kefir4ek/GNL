# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: erosella <erosella@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/04 17:20:00 by erosella          #+#    #+#              #
#    Updated: 2019/09/09 20:56:34 by erosella         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_strlen.c ft_putchar.c ft_strcpy.c ft_strdup.c ft_strncpy.c ft_islower.c \
		ft_strcmp.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
		ft_isupper.c ft_putchar_fd.c ft_tolower.c ft_toupper.c ft_memset.c ft_bzero.c \
		ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_strcat.c \
		ft_strncat.c ft_strlcat.c ft_strchr.c ft_strrchr.c ft_strstr.c ft_strnstr.c \
		ft_strncmp.c ft_atoi.c ft_isspace.c ft_memalloc.c ft_memdel.c ft_strnew.c \
		ft_strdel.c ft_strclr.c ft_striter.c ft_striteri.c ft_strmap.c ft_strmapi.c \
		ft_strequ.c ft_strnequ.c ft_strsub.c ft_strjoin.c ft_strtrim.c ft_strsplit.c \
		ft_wordcount.c ft_wordlen.c ft_itoa.c ft_numlen.c ft_putstr.c ft_putstr_fd.c \
		ft_putendl.c ft_putnbr.c ft_putnbr_fd.c ft_putendl_fd.c ft_lstnew.c ft_lstdel.c \
		ft_lstdelone.c ft_lstadd.c ft_lstiter.c ft_lstmap.c ft_word_delim.c



OBJECTS = $(SRCS:%.c=%.o)


INCLUDES = ./

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJECTS) libft.h
	@ar rc $(NAME) $(OBJECTS)

%.o: %.c
	@gcc -Wall -Wextra -Werror -I$(INCLUDES) -c $< -o $@

clean:
	@/bin/rm -f $(OBJECTS)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
