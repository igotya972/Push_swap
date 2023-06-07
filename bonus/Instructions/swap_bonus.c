/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dferjul <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 18:37:54 by dferjul           #+#    #+#             */
/*   Updated: 2023/06/07 05:28:57 by dferjul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

void	sa(t_list *groot)
{
	t_element	*tmp;

	if (groot->pile_a && groot->pile_a->next)
	{
		tmp = groot->pile_a->next;
		groot->pile_a->next = groot->pile_a->next->next;
		tmp->next = groot->pile_a;
		groot->pile_a = tmp;
	}
	write(1, "sa\n", 3);
}

void	sb(t_list *groot)
{
	t_element	*tmp;

	if (groot->pile_b && groot->pile_b->next)
	{
		tmp = groot->pile_b->next;
		groot->pile_b->next = groot->pile_b->next->next;
		tmp->next = groot->pile_b;
		groot->pile_b = tmp;
	}
	write(1, "sb\n", 3);
}

void	ss(t_list *groot)
{
	sa(groot);
	sb(groot);
	write(1, "ss\n", 3);
}
