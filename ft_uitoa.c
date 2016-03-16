/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoinier <amoinier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/16 15:55:33 by amoinier          #+#    #+#             */
/*   Updated: 2016/03/16 16:08:04 by amoinier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static	int		ft_val(long unsigned int n)
{
	int i;

	i = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static	char	*ft_nbr(long unsigned int n, int val, int i, char *tab)
{
	int	j;
	int	power;

	j = 0;
	while (j < val)
	{
		power = val - (j) - 1;
		tab[i] = 48 + (n / (ft_power(10, power)) % 10);
		i++;
		j++;
	}
	tab[i] = '\0';
	return (tab);
}

char			*ft_uitoa(long unsigned int n)
{
	int		i;
	int		j;
	char	*tab;
	int		val;

	i = 0;
	j = 0;
	val = ft_val(n);
	if (!(tab = (char *)malloc(sizeof(char) * (val + 1))))
		return (NULL);
	tab = ft_nbr(n, val, i, tab);
	return (tab);
}
