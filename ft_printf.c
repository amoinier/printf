/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoinier <amoinier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/14 16:24:51 by amoinier          #+#    #+#             */
/*   Updated: 2016/03/16 16:13:42 by amoinier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>
#include "printf.h"

int		ft_printf(const char *format, ...)
{
	int		i;
	int		count;
	void	*donne;
	va_list	ap;

	i = 0;
	count = 0;
	va_start(ap, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			donne = va_arg(ap, void *);
			count = flag_s(donne, format, i, count);
			count = flag_c(donne, format, i, count);
			count = flag_di(donne, format, i, count);
			count = flag_u(donne, format, i, count);
			count = flag_o(donne, format, i, count);
			count = flag_x(donne, format, i, count);
			count = flag_p(donne, format, i, count);
			count = flag_C(donne, format, i, count);
			count = flag_D(donne, format, i, count);
			count = flag_O(donne, format, i, count);
			count = flag_U(donne, format, i, count);
			count = flag_X(donne, format, i, count);
		}
		else
		{
			ft_putchar(format[i]);
			count++;
		}
		i++;
	}
	va_end(ap);
	return (count);
}

int		main(void)
{
	ft_putnbr(ft_printf("%U\n", ULONG_MAX / 2));
	ft_putstr("\n");
	ft_putnbr(printf("%U\n", ULONG_MAX / 2));
	ft_putchar('\n');
}
