/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dferjul <dferjul@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 08:32:01 by dferjul           #+#    #+#             */
/*   Updated: 2023/06/05 20:53:56 by dferjul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_algo(t_list *groot)
{
	t_element	*big_value;

	big_value = ft_index_big_value(groot);
	if (big_value->index == groot->pile_a->index)
	{
		ra(groot);
		if (groot->pile_a->index > groot->pile_a->next->index)
			sa(groot);
	}
	else if (big_value->index == groot->pile_a->next->index)
	{
		rra(groot);
		if (groot->pile_a->index > groot->pile_a->next->index)
			sa(groot);
	}
	else if (big_value->index == groot->pile_a->next->index)
	{
		if (groot->pile_a->index > groot->pile_a->next->index)
		{
			sa(groot);
		}
	}
}

void	ft_algo2(t_list *groot)
{
	t_element	*big_value;
	int			pos;
	int			i;

	big_value = ft_index_big_value(groot);
	while (groot->pile_a->next)
	{
		if (big_value->index == groot->pile_a->index)
			ra(groot);
		pb(groot);
	}
	while (groot->pile_b != NULL)
	{
		big_value = ft_index_big_value_b(groot);
		pos = ft_pos_big_value(groot, big_value);
		i = ft_lstsize(groot->pile_b);
		while (pos < i && big_value->index != groot->pile_b->index)
			rb(groot);
		while (pos >= i && big_value->index != groot->pile_b->index)
			rrb(groot);
		pa(groot);
	}
}

void	ft_algo_choice(t_list *groot)
{
	t_element	*big_value;
	int			i;

	big_value = ft_index_big_value(groot);
	i = ft_lstsize(groot->pile_a);
	if (big_value->index == 2)
	{
		if (big_value->index > groot->pile_a->index)
			sa(groot);
	}
	if (i == 1)
		exit(EXIT_SUCCESS);
	if (i <= 3)
	{
		printf("1OK\n");
		ft_algo(groot);
	}
	
	else if (i <= 5)
	{
		printf("2OK\n");
		ft_algo2(groot);
	}
	else if (i <= 100)
	{
		printf("3OK\n");
		ft_pre_sorting(groot, 20);
	}
	else if (i > 100)
	{
		printf("4OK\n");
		ft_pre_sorting(groot, 35);
	}
}
