/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_p.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoinier <amoinier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/16 12:15:15 by amoinier          #+#    #+#             */
/*   Updated: 2016/03/16 12:47:03 by amoinier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int		flag_p(void *donne, const char *format, int i, int count)
{
	if (format[i] == 'p')
	{
		ft_putstr("0x");
		count += 2;
		ft_putstr(ft_itoa_base((unsigned long long)donne, 16));
		count += ft_strlen(ft_itoa_base((unsigned long long)donne, 16));
	}
	return (count);
}
