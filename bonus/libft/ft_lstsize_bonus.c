/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dferjul <dferjul@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 23:35:22 by dferjul           #+#    #+#             */
/*   Updated: 2023/06/08 15:54:59 by dferjul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../bonus/checker.h"

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
