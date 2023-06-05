/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dferjul <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 21:44:34 by dferjul           #+#    #+#             */
/*   Updated: 2023/06/06 01:55:20 by dferjul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_list		*groot;
	t_element	*tmp;

	if (ac < 2)
		exit(EXIT_FAILURE);
	groot = initialization();
	ft_parse_arguments(groot, ac, av);
	ft_check_sorted_list(groot);
	ft_index(groot);
	ft_algo_choice(groot);
	while (groot->pile_a)
	{
		tmp = groot->pile_a;
		groot->pile_a = groot->pile_a->next;
		free(tmp);
	}
	return (0);
}
