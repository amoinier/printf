/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_U.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoinier <amoinier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/16 14:46:50 by amoinier          #+#    #+#             */
/*   Updated: 2016/03/16 16:07:09 by amoinier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int		flag_U(void *donne, const char *format, int i, int count)
{
	if (format[i] == 'U')
	{
		ft_putunbr((long unsigned int)donne);
		count += ft_strlen(ft_uitoa((long unsigned int)donne));
	}
	return (count);
}
