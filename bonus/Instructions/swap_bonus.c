/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dferjul <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 18:37:54 by dferjul           #+#    #+#             */
/*   Updated: 2023/06/08 01:54:48 by dferjul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

void	sa(t_list *groot)
{
	t_element	*tmp;

	if (groot->a && groot->a->next)
	{
		tmp = groot->a->next;
		groot->a->next = groot->a->next->next;
		tmp->next = groot->a;
		groot->a = tmp;
	}
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
}

void	ss(t_list *groot)
{
	sa(groot);
	sb(groot);
}
