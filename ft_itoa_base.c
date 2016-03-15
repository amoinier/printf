/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoinier <amoinier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 15:52:46 by amoinier          #+#    #+#             */
/*   Updated: 2016/03/15 14:15:24 by amoinier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int		size_nb(unsigned long long nb)
{
	int	i;

	i = 0;
	while (nb > 0)
	{
		nb /= 10;
		i++;
	}
	return (i);
}

void	ft_numb(unsigned long long nb, int nbase, char *s, int *i)
{
	char	const	base[] = "0123456789ABCDEF";

	if (nb >= (unsigned long long)nbase)
		ft_numb(nb / nbase, nbase, s, i);
	s[(*i)++] = base[nb % nbase];
}

char	*ft_itoa_base(unsigned long long nb, int nbase)
{
	char	*s;
	int	i;

	i = 0;
	if (!(s = (char *)malloc(sizeof(s) * (size_nb(nb) + 1))))
		return (NULL);
	ft_numb(nb, nbase, s, &i);
	return (s);
}
