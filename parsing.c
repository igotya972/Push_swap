/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dferjul <dferjul@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 21:44:41 by dferjul           #+#    #+#             */
/*   Updated: 2023/06/07 19:00:59 by dferjul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*initialization(void)
{
	t_list		*list;

	list = malloc(sizeof(*list));
	list->pile_a = NULL;
	list->pile_b = NULL;
	return (list);
}

void	insert_element(t_list *groot, int newValue)
{
	t_element	*new;
	t_element	*n;

	new = malloc(sizeof(*new));
	if (!new || !groot)
		return ;
	new->value = newValue;
	new->next = NULL;
	new->index = 0;
	if (groot->pile_a)
	{
		n = groot->pile_a;
		while (n->next != NULL)
			n = n->next;
		n->next = new;
	}
	else
		groot->pile_a = new;
}

void	ft_parse_arguments(t_list *groot, int ac, char **av)
{
	int	i;
	int	value;

	i = 1;
	while (i < ac)
	{
		value = ft_atoi(av[i]);
		insert_element(groot, value);
		ft_check_overflow(av, 1);
		ft_check_only_numbers(av, i);
		ft_check_double(groot);
		i++;
	}
}
