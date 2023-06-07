/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dferjul <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 18:38:28 by dferjul           #+#    #+#             */
/*   Updated: 2023/06/07 07:15:21 by dferjul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

void	pa(t_list *groot)
{
	t_element	*tmp;

	if (groot->pile_b)
	{
		tmp = groot->pile_b->next;
		groot->pile_b->next = groot->pile_a;
		groot->pile_a = groot->pile_b;
		groot->pile_b = tmp;
	}
	write(1, "pa\n", 3);
}

void	pb(t_list *groot)
{
	t_element	*tmp;

	if (groot->pile_a)
	{
		tmp = groot->pile_a->next;
		groot->pile_a->next = groot->pile_b;
		groot->pile_b = groot->pile_a;
		groot->pile_a = tmp;
	}
	write(1, "pb\n", 3);
}
