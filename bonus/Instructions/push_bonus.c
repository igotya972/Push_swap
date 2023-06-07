/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dferjul <dferjul@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 18:38:28 by dferjul           #+#    #+#             */
/*   Updated: 2023/06/07 19:23:47 by dferjul          ###   ########.fr       */
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
}
