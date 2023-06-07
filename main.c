/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dferjul <dferjul@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 21:44:34 by dferjul           #+#    #+#             */
/*   Updated: 2023/06/07 19:15:18 by dferjul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_list		*groot;

	if (ac < 2)
		exit(EXIT_FAILURE);
	groot = initialization();
	ft_parse_arguments(groot, ac, av);
	ft_check_sorted_list(groot);
	ft_index(groot);
	ft_algo_choice(groot);
	exit (0);
}
