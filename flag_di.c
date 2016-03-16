/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_di.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoinier <amoinier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/16 12:07:27 by amoinier          #+#    #+#             */
/*   Updated: 2016/03/16 12:08:41 by amoinier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int		flag_di(void *donne, const char *format, int i, int count)
{
	if (format[i] == 'd' || format[i] == 'i')
	{
		ft_putnbr((int)donne);
		count += ft_strlen(ft_itoa((int)donne));
	}
	return (count);
}
