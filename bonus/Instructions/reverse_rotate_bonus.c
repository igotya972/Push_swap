/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dferjul <dferjul@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 18:40:17 by dferjul           #+#    #+#             */
/*   Updated: 2023/06/07 19:23:54 by dferjul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

void	rra(t_list *groot)
{
	t_element	*tmp;
	t_element	*first;

	if (groot->pile_a && groot->pile_a->next)
	{
		first = groot->pile_a;
		while (groot->pile_a->next->next)
		{
			groot->pile_a = groot->pile_a->next;
		}
		tmp = groot->pile_a->next;
		groot->pile_a->next = NULL;
		groot->pile_a = first;
		tmp->next = groot->pile_a;
		groot->pile_a = tmp;
	}
}

void	rrb(t_list *groot)
{
	t_element	*tmp;
	t_element	*first;

	if (groot->pile_b && groot->pile_b->next)
	{
		first = groot->pile_b;
		while (groot->pile_b->next->next)
		{
			groot->pile_b = groot->pile_b->next;
		}
		tmp = groot->pile_b->next;
		groot->pile_b->next = NULL;
		groot->pile_b = first;
		tmp->next = groot->pile_b;
		groot->pile_b = tmp;
	}
}

void	rrr(t_list *groot)
{
	rra(groot);
	rrb(groot);
}
