/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_grootsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dferjul <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 04:38:09 by dferjul           #+#    #+#             */
/*   Updated: 2023/06/03 05:32:01 by dferjul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_lstsize(t_element *groot)
{
	int	len;

	len = 0;
	while (groot)
	{
		len++;
		groot = groot->next;
	}
	return (len);
}
