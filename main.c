/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dferjul <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 21:44:34 by dferjul           #+#    #+#             */
/*   Updated: 2023/06/05 18:52:31 by dferjul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int ac, char **av)
{
	t_list	*groot;
	t_element	*current;

	(void) av;
	if (ac < 2)
		exit(EXIT_FAILURE);
	groot = initialization();
	ft_parse_arguments(groot, ac, av);
	ft_index(groot);
	//ft_check_sorted_list(groot);
	ft_algo_choice(groot);
	//write(1, "Coucou\n", 7);
	current = groot->pile_a;
	while (current)
	{
		printf("%d ", current->value);
		current = current->next;
	}
	printf("\n");
	
	while (groot->pile_a)
	{
		t_element	*tmp;
		
		tmp = groot->pile_a;
		groot->pile_a = groot->pile_a->next;
		free(tmp);
	}
	//groot = ft_parsing(av, ac);
	//printf("%d\n", groot->pile_a->value);
	//groot->pile_b = NULL;
	//if (groot->pile_a == NULL)
	//	write(2, "List NULL\n", 10);
	// write(1, "Coucou\n", 7);
	//ft_index(groot);
	// write(1, "Coucou\n", 7);
	//ft_check_double(groot);
	// write(1, "Coucou\n", 7);
	//ft_check_sorted_list(groot);
	// write(1, "Coucou\n", 7);
	//ft_algo_choice(groot);
	return (0);
}
