/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_s.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoinier <amoinier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/16 12:02:26 by amoinier          #+#    #+#             */
/*   Updated: 2016/03/16 12:05:27 by amoinier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int		flag_s(void *donne, const char *format, int i, int count)
{
	if (format[i] == 's')
	{
		ft_putstr((char *)donne);
		if ((char *)donne)
			count += ft_strlen((char *)donne);
		else
			count += 6;
	}
	return (count);
}
