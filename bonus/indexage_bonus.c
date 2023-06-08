/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   indexage_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dferjul <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 18:32:43 by dferjul           #+#    #+#             */
/*   Updated: 2023/06/08 01:54:48 by dferjul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

t_element	*ft_index_min(t_list *groot)
{
	t_element	*tmp;
	t_element	*new;
	int			i;

	i = 0;
	tmp = NULL;
	new = groot->a;
	while (new)
	{
		if (new->index == 0 && (i == 0 || tmp->value > new->value))
		{
			tmp = new;
			i = 1;
		}
		new = new->next;
	}
	return (tmp);
}

void	ft_index(t_list *groot)
{
	t_element	*tmp;
	int			i;

	tmp = ft_index_min(groot);
	i = 1;
	while (tmp)
	{
		tmp->index = i;
		tmp = ft_index_min(groot);
		i++;
	}
}

t_element	*ft_index_big_value(t_list *groot)
{
	t_element	*tmp;
	t_element	*new;

	tmp = groot->a;
	new = groot->a->next;
	while (new)
	{
		if (new->index > tmp->index)
			tmp = new;
		new = new->next;
	}
	return (tmp);
}

t_element	*ft_index_big_value_b(t_list *groot)
{
	t_element	*tmp;
	t_element	*new;

	tmp = groot->pile_b;
	new = groot->pile_b->next;
	while (new)
	{
		if (new->index > tmp->index)
			tmp = new;
		new = new->next;
	}
	return (tmp);
}

int	ft_pos_big_value(t_list *groot, t_element *big_value)
{
	int			pos;
	t_element	*tmp;

	pos = 1;
	tmp = groot->pile_b;
	while (tmp)
	{
		if (big_value->index == tmp->index)
		{
			return (pos);
		}
		pos++;
		tmp = tmp->next;
	}
	return (pos);
}
