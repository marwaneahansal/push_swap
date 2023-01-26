# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mahansal <mahansal@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/14 18:04:23 by mahansal          #+#    #+#              #
#    Updated: 2023/01/26 13:31:07 by mahansal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= cc

NAME 	= push_swap

SRCS 	= push_swap.c operations.c operations2.c init.c \
				check.c \
				sort_fn.c \
				ft_atoi.c ft_split.c \
				utils.c utils2.c \

OBJS 	= $(SRCS:.c=.o)

CFLAGS 	= -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -g $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all