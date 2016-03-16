/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_X.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoinier <amoinier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/16 13:07:15 by amoinier          #+#    #+#             */
/*   Updated: 2016/03/16 13:10:10 by amoinier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int		flag_X(void *donne, const char *format, int i, int count)
{
	if (format[i] == 'X')
	{
		ft_putstr(ft_itoa_basex((unsigned long long)donne, 16));
		count += ft_strlen(ft_itoa_basex((unsigned long long)donne, 16));
	}
	return (count);
}
