/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_D.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoinier <amoinier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/16 14:41:16 by amoinier          #+#    #+#             */
/*   Updated: 2016/03/16 14:42:11 by amoinier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int		flag_D(void *donne, const char *format, int i, int count)
{
	if (format[i] == 'D')
	{
		ft_putnbr((long int)donne);
		count += ft_strlen(ft_itoa((long int)donne));
	}
	return (count);
}
