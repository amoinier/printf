/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_C.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoinier <amoinier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/16 12:58:07 by amoinier          #+#    #+#             */
/*   Updated: 2016/03/16 12:59:03 by amoinier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int		flag_C(void *donne, const char *format, int i, int count)
{
	if (format[i] == 'C')
	{
		ft_putchar((wint_t)donne);
		count++;
	}
	return (count);
}
