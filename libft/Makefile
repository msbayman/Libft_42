# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amsaoub <amsaoub@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/12 11:17:41 by amsaoub           #+#    #+#              #
#    Updated: 2022/10/25 12:11:58 by amsaoub          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ${wildcard *.c}
	
OBJS = ${SRC:.c=.o} 
bSRC = ft_lstnew.c\
	
bOBJS = ${bSRC:.c=.o}

CFLAGS = -Wall -Wextra -Werror

CC = gcc

HEADER = libft.h

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $@ $^

$(OBJS): $(HEADER)


bonus : all
clean:
	rm -rf $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all