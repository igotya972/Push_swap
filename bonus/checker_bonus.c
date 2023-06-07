/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dferjul <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 21:44:34 by dferjul           #+#    #+#             */
/*   Updated: 2023/06/07 07:14:47 by dferjul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

static void ft_print_instructions(t_list *groot, char *line)
{
	if (ft_strcmp(line, "sa\n") == 0)
		sa(groot);
	else if (ft_strcmp(line, "sb") == 0)
		sb(groot);
	else if (ft_strcmp(line, "ss") == 0)
		ss(groot);
	else if (ft_strcmp(line, "pa") == 0)
		pa(groot);
	else if (ft_strcmp(line, "pb") == 0)
		pb(groot);
	else if (ft_strcmp(line, "ra") == 0)
		ra(groot);
	else if (ft_strcmp(line, "rb") == 0)
		rb(groot);
	else if (ft_strcmp(line, "rr") == 0)
		rr(groot);
	else if (ft_strcmp(line, "rra") == 0)
			rra(groot);
	else if (ft_strcmp(line, "rrb") == 0)
		rrb(groot);
	else if (ft_strcmp(line, "rrr") == 0)
		rrr(groot);
	else 
	{
		ft_putstr_fd("ERROR\n", 2);
		free(line);
	}
}

int	main(int ac, char **av)
{
	char	*line;
	t_list	*groot;

	if (ac < 2)
		exit(EXIT_FAILURE);
	groot = initialization();
	ft_parse_arguments(groot, ac, av);
	printf("NOK\n");
	ft_check_double(groot);
	line = get_next_line(0);
	while (line)
	{
		ft_print_instructions(groot, line);
		free (line);
		line = get_next_line(0);
	}
	if (ft_is_sorted(groot) == 1)
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
}