/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dferjul <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 18:38:22 by dferjul           #+#    #+#             */
/*   Updated: 2023/06/08 01:54:48 by dferjul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ra(t_list *groot)
{
	t_element	*tmp;
	t_element	*first;

	if (groot->a && groot->a->next)
	{
		tmp = groot->a;
		groot->a = groot->a->next;
		first = groot->a;
		while (groot->a->next)
		{
			groot->a = groot->a->next;
		}
		groot->a->next = tmp;
		tmp->next = NULL;
		groot->a = first;
	}
	write(1, "ra\n", 3);
}

void	rb(t_list *groot)
{
	t_element	*tmp;
	t_element	*first;

	if (groot->pile_b && groot->pile_b->next)
	{
		tmp = groot->pile_b;
		groot->pile_b = groot->pile_b->next;
		first = groot->pile_b;
		while (groot->pile_b->next)
		{
			groot->pile_b = groot->pile_b->next;
		}
		groot->pile_b->next = tmp;
		tmp->next = NULL;
		groot->pile_b = first;
	}
	write(1, "rb\n", 3);
}

void	rr(t_list *groot)
{
	ra(groot);
	rb(groot);
	write(1, "rr\n", 3);
}
