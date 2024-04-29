# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yooshima <yooshima@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/24 15:23:57 by yooshima          #+#    #+#              #
#    Updated: 2024/04/29 15:13:21 by yooshima         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME		= libft.a
SRCS		= ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c\
				ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strlen.c\
				ft_strncmp.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c\
				ft_memchr.c ft_memcmp.c ft_strlcpy.c ft_strnstr.c ft_strlcat.c\
				ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c\
				ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c\
				ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
SRCS_BONUS	= ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back\
				ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c
OBJS		= $(SRCS:.c=.o)
OBJ_BONUS 	= $(SRCS_BONUS:.c=.o)
CC			= CC
CFLAGS		= -Wall -Werror -Wextra

$(NAME): $(OBJS)
		ar rc $(NAME) $(OBJS)

bonus:$(OBJ_BONUS)
		touch bonus
		ar rc $(NAME) $(OBJS)

all: $(NAME)

clean:
		rm -f $(OBJS) $(OBJ_BONUS) bonus

fclean: clean
		rm -f $(NAME)

re: fclean all


