/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sogabrie <sogabrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 16:14:04 by sogabrie          #+#    #+#             */
/*   Updated: 2023/06/26 16:14:05 by sogabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3D.h"

int	check_end(int check[6])
{
	int	i;

	i = 0;
	while (i < 6)
	{
		if (check[i] == 0)
			return (0);
		i++;
	}
	return (1);
}

void	count_tmp(char **tmp)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (tmp[i])
	{
		if (!unprinted(tmp[i]))
			count++;
		i++;
	}
	if (count != 2)
		exit(printf(E_CONFIGURATION));
}
