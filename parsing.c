/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dferjul <dferjul@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 21:44:41 by dferjul           #+#    #+#             */
/*   Updated: 2023/06/05 21:10:18 by dferjul          ###   ########.fr       */
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

t_element	*new_list(int value, int index)
{
	t_element *new;
	
	new = malloc(sizeof(*new));
	if (!new)
		return (0);
	if (new)
	{
		new->value = value;
		new->index = index;
		new->next = NULL;
	}
	//write(1, "Coucou\n", 7);
	return(new);
}
/*
void	ft_push_stack_a(t_list *groot, int value, int index)
{
	t_element	*new;

	new = new_list(value, index);
	if (new)
	{
		//new->next = groot->pile_a;
		groot->pile_a = new;
		afficher(groot);
		write(1, "Coucou\n", 7);
	}
}*/

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

void	insert_element_pile_b(t_list *groot, int newValue)
{
	t_element	*new;

	new = malloc(sizeof(*new));
	if (!new || !groot)
		return ;
	new->value = newValue;
	new->next = groot->pile_b;
	groot->pile_b = new;
}

/*t_list	*ft_checker(char **av, int ac)
{
	t_list	*groot;
	int			i = 0;
	int			n;

	groot = NULL;
	if (av[ac])
	{
		groot = new_list(groot, i);
		write(1, "Coucou\n", 7);
		//i = ft_atoi(av[ac]);
		//groot->pile_a = new_list(i);
		n = ac + 1;
		while (av[n])
		{
			i = ft_atoi(av[ac]);
			insert_element(groot, i);
			n++;
		}
	}
	return (groot);
}*/

void	ft_parse_arguments(t_list *groot, int ac, char **av)
{
	int	i;
	int	value;
	
	i = 1;
	while (i < ac)
	{
		value = atoi(av[i]);
		*av = *ft_split(av[1], 32);
		insert_element(groot, value);
		ft_check_overflow(av, 1);
		ft_check_only_numbers(av, i);
		ft_check_double(groot);
		i++;
		//write(1, "Coucou\n", 7);
	}
}

/*t_list	*ft_parsing(char **av, int ac)
{
	t_list	*groot;
	char	**str;

	(void)	ac;
	str = NULL;
	if (!av[2])
	{
		str = ft_split(av[1], 32);
		ft_check_overflow(str, 0);				
		ft_check_only_numbers(str, 0);	
		groot = ft_checker(str, 0);
	}
	else
	{
		groot = ft_checker(av, 1);
		write(1, "Coucou\n", 7);
		ft_check_overflow(av, 1);
		ft_check_only_numbers(av, 1);
	}
	return (groot); */

// groot = lst_element(ft_atoi(av[i]));