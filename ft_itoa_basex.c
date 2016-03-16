/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_basex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoinier <amoinier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/16 13:07:47 by amoinier          #+#    #+#             */
/*   Updated: 2016/03/16 13:09:58 by amoinier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static	int		size_nb(unsigned long long nb)
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

static	void	ft_numb(unsigned long long nb, int nbase, char *s, int *i)
{
	char	const	base[] = "0123456789ABCDEF";

	if (nb >= (unsigned long long)nbase)
		ft_numb(nb / nbase, nbase, s, i);
	s[(*i)++] = base[nb % nbase];
}

char			*ft_itoa_basex(unsigned long long nb, int nbase)
{
	char	*s;
	int	i;

	i = 0;
	if (!(s = (char *)malloc(sizeof(s) * (size_nb(nb) + 1))))
		return (NULL);
	ft_numb(nb, nbase, s, &i);
	return (s);
}
