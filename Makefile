# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yooshima <yooshima@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/24 15:23:57 by yooshima          #+#    #+#              #
#    Updated: 2024/04/24 17:55:04 by yooshima         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME	= libft.a
SRCS	= ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c\
			ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strlen.c\
			ft_strncmp.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c\
			ft_memchr.c ft_memcmp.c ft_strlcpy.c ft_strnstr.c ft_strlcat.c\
			ft_atoi.c ft_calloc.c ft_strdup.c
OBJS	= $(SRCS:.c=.o)
CC		= CC
CFLAGS	= -Wall -Werror -Wextra

$(NAME): $(OBJS)
		ar rc $(NAME) $(OBJS)

all: $(NAME)

clean:
		rm -f $(OBJS)

fclean: clean
		rm -f $(NAME)

re: fclean all

