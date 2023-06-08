/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dferjul <dferjul@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 21:44:34 by dferjul           #+#    #+#             */
/*   Updated: 2023/06/08 15:53:27 by dferjul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../bonus/checker.h"

static void	ft_exec_instructions_bis(t_list *groot, char *line)
{
	if (ft_strcmp(line, "rra\n") == 0)
		rra(groot);
	else if (ft_strcmp(line, "rrb\n") == 0)
		rrb(groot);
	else if (ft_strcmp(line, "rrr\n") == 0)
		rrr(groot);
	else
	{
		ft_putstr_fd("ERROR\n", 2);
		free(line);
		exit(EXIT_FAILURE);
	}
}

static void	ft_exec_instructions(t_list *groot, char *line)
{
	if (ft_strcmp(line, "sa\n") == 0)
		sa(groot);
	else if (ft_strcmp(line, "sb\n") == 0)
		sb(groot);
	else if (ft_strcmp(line, "ss\n") == 0)
		ss(groot);
	else if (ft_strcmp(line, "pa\n") == 0)
		pa(groot);
	else if (ft_strcmp(line, "pb\n") == 0)
		pb(groot);
	else if (ft_strcmp(line, "ra\n") == 0)
		ra(groot);
	else if (ft_strcmp(line, "rb\n") == 0)
		rb(groot);
	else if (ft_strcmp(line, "rr\n") == 0)
		rr(groot);
	else
		ft_exec_instructions_bis(groot, line);
}

int	main(int ac, char **av)
{
	char	*line;
	t_list	*groot;

	if (ac < 2)
		exit(EXIT_FAILURE);
	groot = initialization();
	ft_parse_arguments(groot, ac, av);
	ft_check_double(groot);
	line = get_next_line(0);
	while (line)
	{
		ft_exec_instructions(groot, line);
		free (line);
		line = get_next_line(0);
	}
	if (groot->pile_b == NULL && ft_is_sorted(groot) == 1)
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
	exit (0);
}
