# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dremisze <dremisze@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/27 22:50:55 by dremisze          #+#    #+#              #
#    Updated: 2024/03/22 19:54:40 by dremisze         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS = ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
	ft_toupper.c ft_tolower.c ft_strncmp.c ft_strlen.c ft_memmove.c \
	ft_strlcat.c ft_strlcpy.c ft_strrchr.c ft_bzero.c \
	ft_strchr.c ft_memset.c ft_memcpy.c ft_memcmp.c \
	ft_memchr.c ft_strnstr.c ft_strdup.c ft_calloc.c \
	ft_atoi.c ft_substr.c ft_strjoin.c ft_strtrim.c \

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	@ar rcs $(NAME) $(OBJS)
%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@
tests:
	@$(CC) -o TESTY.out .TESTY.c -lbsd -L. -lft -I./
	@./TESTY.out
	@rm -f TESTY.out
clean:
	@rm -f $(OBJS)
fclean: clean
	@rm -f $(NAME)
re: fclean all

.PHONY: all clean fclean re tests
