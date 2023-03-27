# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gbricot <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/04 16:14:00 by gbricot           #+#    #+#              #
#    Updated: 2023/02/21 11:13:29 by gbricot          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

MY_SOURCES =	ft_atoi.c ft_putendl_fd.c ft_strncmp.c ft_bzero.c \
		ft_putnbr_fd.c ft_strnstr.c ft_calloc.c ft_putstr_fd.c \
		ft_strrchr.c ft_isalnum.c ft_split.c ft_strtrim.c \
		ft_isalpha.c ft_strchr.c ft_substr.c ft_isascii.c \
		ft_strdup.c ft_tolower.c ft_isdigit.c ft_memchr.c \
		ft_striteri.c ft_toupper.c ft_isprint.c ft_memcmp.c \
		ft_strjoin.c ft_itoa.c ft_memcpy.c ft_strlcat.c \
		ft_memmove.c ft_strlcpy.c ft_memset.c ft_strlen.c \
		ft_putchar_fd.c ft_strmapi.c

MY_BONUS_SOURCES=	ft_lstmap_bonus.c ft_lstnew_bonus.c \
			ft_lstiter_bonus.c ft_lstlast_bonus.c \
			ft_lstsize_bonus.c ft_lstclear_bonus.c \
			ft_lstdelone_bonus.c ft_lstadd_back_bonus.c \
			ft_lstadd_front_bonus.c

MY_OBJECTS = $(MY_SOURCES:.c=.o)

MY_BONUS_OBJECTS = $(MY_BONUS_SOURCES:.c=.o)

CC = gcc

CFLAGS = -Wall -Wextra -Werror

$(NAME): $(MY_OBJECTS)
	ar cr $(NAME) $(MY_OBJECTS)

bonus: $(MY_BONUS_OBJECTS)
	ar cr $(NAME) $(MY_BONUS_OBJECTS)

all: $(NAME)

clean:
	rm -f $(MY_OBJECTS) $(MY_BONUS_OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all
