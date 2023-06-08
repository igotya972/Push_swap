/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_bis_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dferjul <dferjul@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 19:41:45 by dferjul           #+#    #+#             */
/*   Updated: 2023/06/08 15:54:21 by dferjul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../bonus/checker.h"

t_element	*ft_big_value_sorting(t_list *groot)
{
	t_element	*tmp;
	t_element	*new;

	tmp = groot->pile_b;
	new = groot->pile_b->next;
	while (new)
	{
		if (new->index > tmp->index)
			tmp = new;
		new = new->next;
	}
	return (tmp);
}

void	ft_mid_tri(t_list *groot)
{
	t_element	*big_value;
	int			pos;
	int			i;

	while (groot->pile_b)
	{
		big_value = ft_big_value_sorting(groot);
		i = ft_lstsize(groot->pile_b);
		pos = ft_pos_big_value(groot, big_value);
		while (pos < (i / 2) && big_value->index != groot->pile_b->index)
			rb(groot);
		while (pos >= (i / 2) && big_value->index != groot->pile_b->index)
			rrb(groot);
		pa(groot);
	}
}

void	ft_algo(t_list *groot, int limit)
{
	while (groot->a)
	{
		if (groot->a->index < limit)
		{
			pb(groot);
			limit++;
			if (groot->pile_b->index > ft_lstsize(groot->pile_b))
			{
				rb(groot);
			}
		}
		else
			ra(groot);
	}
	ft_mid_tri(groot);
}
