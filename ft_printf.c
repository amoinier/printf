/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoinier <amoinier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/14 16:24:51 by amoinier          #+#    #+#             */
/*   Updated: 2016/03/14 19:47:38 by amoinier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>
#include "libft.h"

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
			if (format[i] == 's')
			{
				ft_putstr((char *)donne);
				count += ft_strlen((char *)donne);
			}
			else if (format[i] == 'c')
			{
				ft_putchar((char)donne);
				count++;
			}
			else if (format[i] == 'd')
			{
				ft_putnbr((int)donne);
				count += ft_strlen(ft_itoa((int)donne));
			}
			else if (format[i] == 'o')
			{
				ft_putnbr((unsigned int)donne);
				count += ft_strlen(ft_itoa((unsigned int)donne));
			}
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
	ft_putchar('\n');
	ft_putnbr(printf(" --- %o\n", -478));
	ft_putchar('\n');
	ft_putnbr(ft_printf(" +++ %o\n", 478));
	ft_putchar('\n');
}
