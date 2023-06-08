/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dferjul <dferjul@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 18:38:28 by dferjul           #+#    #+#             */
/*   Updated: 2023/06/08 15:54:31 by dferjul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../bonus/checker.h"

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
}
