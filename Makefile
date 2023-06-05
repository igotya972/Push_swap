# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dferjul <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/02 15:46:11 by dferjul           #+#    #+#              #
#    Updated: 2023/06/04 17:07:09 by dferjul          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	main.c \
			parsing.c \
			indexage.c \
			utils.c \
			checker.c	\
			Algo/algo.c	\
			Algo/algo_bis.c	\
			libft/ft_atoi.c \
			libft/ft_split.c \
			libft/ft_lstnew.c \
			libft/ft_strlen.c \
			libft/ft_lstsize.c \
			Instructions/push.c \
			Instructions/reverse_rotate.c \
			Instructions/rotate.c \
			Instructions/swap.c \

OBJS	=	$(SRCS:.c=.o)

CC	=	gcc

CFLAGS	=	-Wall -Wextra -Werror

RM	=	rm -rf

NAME	=	push_swap

Name_B	=	checker

#rules

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONE : all push_swap.a clean fclean re
