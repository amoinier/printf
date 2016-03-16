/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_c.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoinier <amoinier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/16 12:07:01 by amoinier          #+#    #+#             */
/*   Updated: 2016/03/16 12:08:38 by amoinier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int		flag_c(void *donne, const char *format, int i, int count)
{
	if (format[i] == 'c')
	{
		ft_putchar((char)donne);
		count++;
	}
	return (count);
}
