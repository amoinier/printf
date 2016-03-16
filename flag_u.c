/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_u.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoinier <amoinier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/16 14:43:54 by amoinier          #+#    #+#             */
/*   Updated: 2016/03/16 15:56:46 by amoinier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int		flag_u(void *donne, const char *format, int i, int count)
{
	if (format[i] == 'u')
	{
		ft_putunbr((unsigned int)donne);
		count += ft_strlen(ft_uitoa((unsigned int)donne));
	}
	return (count);
}
