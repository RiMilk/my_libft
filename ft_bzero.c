/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeraldi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 15:44:46 by djeraldi          #+#    #+#             */
/*   Updated: 2020/10/30 14:47:52 by djeraldi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *dict, size_t count)
{
	size_t i;

	i = 0;
	while (i < count)
	{
		((char *)dict)[i] = 0;
		i++;
	}
}
