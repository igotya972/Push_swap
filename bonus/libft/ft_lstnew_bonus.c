/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dferjul <dferjul@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 04:12:18 by dferjul           #+#    #+#             */
/*   Updated: 2023/06/08 15:54:55 by dferjul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../bonus/checker.h"

t_element	*ft_lstnew(int value)
{
	t_element	*groot;

	groot = malloc(sizeof(t_list));
	if (!groot)
		return (NULL);
	groot->value = value;
	groot->next = NULL;
	return (groot);
}
