/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoinier <amoinier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/16 15:43:36 by amoinier          #+#    #+#             */
/*   Updated: 2016/03/16 16:07:55 by amoinier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static	int	ft_val(long unsigned int n)
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

void		ft_putunbr(long unsigned int n)
{
	int	j;
	int	i;
	int	power;

	i = 0;
	j = 0;
	while (j < ft_val(n))
	{
		power = ft_val(n) - j - 1;
		ft_putchar(48 + (n / (ft_power(10, power)) % 10));
		j++;
	}
}
