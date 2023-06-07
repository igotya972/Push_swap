/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dferjul <dferjul@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 18:38:22 by dferjul           #+#    #+#             */
/*   Updated: 2023/06/07 19:24:03 by dferjul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

void	ra(t_list *groot)
{
	t_element	*tmp;
	t_element	*first;

	if (groot->pile_a && groot->pile_a->next)
	{
		tmp = groot->pile_a;
		groot->pile_a = groot->pile_a->next;
		first = groot->pile_a;
		while (groot->pile_a->next)
		{
			groot->pile_a = groot->pile_a->next;
		}
		groot->pile_a->next = tmp;
		tmp->next = NULL;
		groot->pile_a = first;
	}
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
}

void	rr(t_list *groot)
{
	ra(groot);
	rb(groot);
}
