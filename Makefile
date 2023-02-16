# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mahansal <mahansal@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/14 18:04:23 by mahansal          #+#    #+#              #
#    Updated: 2023/02/15 07:41:18 by mahansal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= cc

NAME 	= push_swap

BNAME 	= checker

SRCS 	= push_swap.c operations.c operations2.c init.c \
				check.c \
				sort_fn.c sort_helpers.c \
				ft_atoi.c ft_split.c ft_strjoin.c \
				utils.c utils2.c utils3.c \

BSRCS 	= bonus/checker.c bonus/get_next_line.c \
				bonus/get_next_line_utils.c \
				bonus/operations_bonus.c bonus/operations2_bonus.c \
				bonus/init_bonus.c bonus/utils_bonus.c bonus/utils2_bonus.c \
				bonus/check_bonus.c bonus/ft_atoi.c bonus/ft_split.c \
				bonus/ft_strjoin.c bonus/utils3_bonus.c \
				

OBJS 	= $(SRCS:.c=.o)

BOBJS 	= $(BSRCS:.c=.o)

CFLAGS 	= -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME) -fsanitize=address

bonus: $(BOBJS)
	$(CC) $(CFLAGS) $(BOBJS) -o $(BNAME) -fsanitize=address
	
clean:
	rm -f $(OBJS)
	rm -f $(BOBJS)

fclean: clean
	rm -f $(NAME)
	rm -f $(BNAME)

re: fclean all