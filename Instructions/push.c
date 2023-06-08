/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dferjul <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 18:38:28 by dferjul           #+#    #+#             */
/*   Updated: 2023/06/08 01:54:48 by dferjul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pa(t_list *groot)
{
	t_element	*tmp;

	if (groot->pile_b)
	{
		tmp = groot->pile_b->next;
		groot->pile_b->next = groot->a;
		groot->a = groot->pile_b;
		groot->pile_b = tmp;
	}
	write(1, "pa\n", 3);
}

void	pb(t_list *groot)
{
	t_element	*tmp;

	if (groot->a)
	{
		tmp = groot->a->next;
		groot->a->next = groot->pile_b;
		groot->pile_b = groot->a;
		groot->a = tmp;
	}
	write(1, "pb\n", 3);
}
