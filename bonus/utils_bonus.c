/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dferjul <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 06:48:55 by dferjul           #+#    #+#             */
/*   Updated: 2023/06/08 01:54:48 by dferjul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	ft_is_sorted(t_list *groot)
{
	t_element	*tmp;
	t_element	*new;

	if (groot->a->next == NULL)
		return (1);
	tmp = groot->a;
	new = groot->a->next;
	while (new)
	{
		if (new->value > tmp->value)
		{
			new = new->next;
			tmp = tmp->next;
			if (new == NULL)
				return (1);
		}
		else
			break ;
	}
	return (0);
}

void	ft_free_groot(t_list *groot)
{
	t_element	*tmp;

	while (groot->a)
	{
		tmp = groot->a;
		groot->a = groot->a->next;
		free(tmp);
	}
	while (groot->pile_b)
	{
		tmp = groot->pile_b;
		groot->pile_b = groot->pile_b->next;
		free(tmp);
	}
	free(groot);
}

void	ft_putstr_fd(char *str, int fd)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write (fd, &str[i], 1);
		i++;
	}
}
