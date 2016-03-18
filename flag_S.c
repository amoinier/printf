/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_S.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoinier <amoinier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/18 12:03:06 by amoinier          #+#    #+#             */
/*   Updated: 2016/03/18 12:08:25 by amoinier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int		flag_s(void *donne, const char *format, int i, int count)
{
	if (format[i] == 'S')
	{
		ft_putstr((wchar_t *)donne);
		if ((wchar_t *)donne)
			count += ft_strlen((wchar_t *)donne);
		else
			count += 6;
	}
	return (count);
}
