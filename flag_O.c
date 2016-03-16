/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_O.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoinier <amoinier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/16 14:48:31 by amoinier          #+#    #+#             */
/*   Updated: 2016/03/16 14:48:51 by amoinier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int		flag_O(void *donne, const char *format, int i, int count)
{
	if (format[i] == 'O')
	{
		ft_putstr(ft_itoa_base((unsigned long long)donne, 8));
		count += ft_strlen(ft_itoa_base((unsigned long long)donne, 8));
	}
	return (count);
}
