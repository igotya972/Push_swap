/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dferjul <dferjul@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 18:40:17 by dferjul           #+#    #+#             */
/*   Updated: 2023/06/08 15:54:36 by dferjul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../bonus/checker.h"

void	rra(t_list *groot)
{
	t_element	*tmp;
	t_element	*first;

	if (groot->a && groot->a->next)
	{
		first = groot->a;
		while (groot->a->next->next)
		{
			groot->a = groot->a->next;
		}
		tmp = groot->a->next;
		groot->a->next = NULL;
		groot->a = first;
		tmp->next = groot->a;
		groot->a = tmp;
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
