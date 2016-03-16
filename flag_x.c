/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_x.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoinier <amoinier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/16 12:14:57 by amoinier          #+#    #+#             */
/*   Updated: 2016/03/16 12:17:21 by amoinier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int		flag_x(void *donne, const char *format, int i, int count)
{
	if (format[i] == 'x')
	{
		ft_putstr(ft_itoa_base((unsigned long long)donne, 16));
		count += ft_strlen(ft_itoa_base((unsigned long long)donne, 16));
	}
	return (count);
}
