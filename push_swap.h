/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dferjul <dferjul@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 15:15:02 by dferjul           #+#    #+#             */
/*   Updated: 2023/06/07 18:28:30 by dferjul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include <stdio.h>
# include <stdarg.h>
# include <stdint.h>
# include <limits.h>

typedef struct s_element
{
	int					value;
	int					index;
	struct s_element	*next;
}						t_element;

typedef struct s_list
{
	struct s_element	*pile_a;
	struct s_element	*pile_b;
}						t_list;

/*
	Instruction
*/
void		sa(t_list *groot);
void		sb(t_list *groot);
void		ss(t_list *groot);
void		pa(t_list *groot);
void		pb(t_list *groot);
void		ra(t_list *groot);
void		rb(t_list *groot);
void		rr(t_list *groot);
void		rra(t_list *groot);
void		rrb(t_list *groot);
void		rrr(t_list *groot);

/*	
Parsing
	*/
t_list		*initialization(void);
int			main(int ac, char **av);
void		ft_parse_arguments(t_list *groot, int ac, char **av);
void		insert_element(t_list *groot, int newValue);
void		insert_element_pile_b(t_list *groot, int newValue);

/*
	Algo
*/
int			ft_pos_big_value(t_list *groot, t_element *big_value);
void		ft_algo(t_list *groot, int limit);
void		ft_short_algo2(t_list *groot);
void		ft_short_algo(t_list *groot);
void		ft_algo_choice(t_list *groot);
void		ft_mid_tri(t_list *groot);

/*
	Checker
*/
void		ft_error(void);
void		ft_check_only_numbers(char **av, int ac);
void		ft_check_sorted_list(t_list *groot);
void		ft_check_double(t_list *groot);
void		ft_check_overflow(char **av, int ac);

/*
	Indexage
*/
t_element	*ft_index_min(t_list *groot);
void		ft_index(t_list *groot);
t_element	*ft_index_big_value(t_list *groot);
t_element	*ft_index_big_value_b(t_list *groot);

/*
	Libft
*/
int			ft_lstsize(t_element *groot);
size_t		ft_strlen(const char *s);
int			ft_strcmp(char *s1, char *s2);
t_element	*ft_lstnew(int value);
char		**ft_split(char const *s, char c);
int			ft_atoi(const char *str);

#endif
