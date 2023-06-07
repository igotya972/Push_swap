# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dferjul <dferjul@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/02 15:46:11 by dferjul           #+#    #+#              #
#    Updated: 2023/06/07 19:48:36 by dferjul          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	main.c \
			parsing.c \
			indexage.c \
			check.c	\
			Algo/algo.c	\
			Algo/algo_bis.c	\
			libft/ft_atoi.c \
			libft/ft_lstnew.c \
			libft/ft_strlen.c \
			libft/ft_lstsize.c \
			libft/ft_strcmp.c \
			Instructions/push.c \
			Instructions/reverse_rotate.c \
			Instructions/rotate.c \
			Instructions/swap.c \

SRCS_bonus	=	bonus/utils_bonus.c \
				bonus/checker_bonus.c \
				bonus/indexage_bonus.c \
				bonus/check_bonus.c	\
				bonus/parsing_bonus.c \
				bonus/Algo/algo_bonus.c	\
				bonus/Algo/algo_bis_bonus.c	\
				bonus/libft/ft_atoi_bonus.c \
				bonus/libft/ft_split_bonus.c \
				bonus/libft/ft_lstnew_bonus.c \
				bonus/libft/ft_lstsize_bonus.c \
				bonus/libft/ft_strcmp_bonus.c \
				bonus/Instructions/push_bonus.c \
				bonus/Instructions/reverse_rotate_bonus.c \
				bonus/Instructions/rotate_bonus.c \
				bonus/Instructions/swap_bonus.c \
				bonus/get_next_line.c \
				bonus/get_next_line_utils.c \

OBJS	=	$(SRCS:.c=.o)

OBJS_bonus	=	$(SRCS_bonus:.c=.o)

CC	=	gcc

CFLAGS	=	-Wall -Wextra -Werror

RM	=	rm -rf

NAME	=	push_swap

Name_B	=	checker

#rules

all : $(NAME)

$(NAME) : $(OBJS) 
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

$(Name_B) : $(OBJS_bonus) 
	$(CC) $(CFLAGS) $(OBJS_bonus) -o $(Name_B)

bonus	: $(NAME) $(OBJS_bonus)
		$(CC) $(CFLAGS) $(OBJS_bonus) -o $(Name_B)

clean :
	$(RM) $(OBJS) $(OBJS_bonus)

fclean : clean
	$(RM) $(NAME) $(Name_B)

re : fclean all

.PHONE : all push_swap.a clean fclean re
