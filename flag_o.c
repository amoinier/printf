/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_o.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoinier <amoinier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/16 12:14:41 by amoinier          #+#    #+#             */
/*   Updated: 2016/03/16 12:17:22 by amoinier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int		flag_o(void *donne, const char *format, int i, int count)
{
	if (format[i] == 'o')
	{
		ft_putstr(ft_itoa_base((unsigned long long)donne, 8));
		count += ft_strlen(ft_itoa_base((unsigned long long)donne, 8));
	}
	return (count);
}
