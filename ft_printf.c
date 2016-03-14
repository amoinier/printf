/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoinier <amoinier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/14 16:24:51 by amoinier          #+#    #+#             */
/*   Updated: 2016/03/14 18:45:03 by amoinier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "libft.h"

int		size_int(int nb)
{
	int	i;

	i = 0;
	while (nb > 0)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}

int		ft_printf(const char *format, ...)
{
	int		i;
	int		count;
	va_list	ap;

	i = 0;
	count = 0;
	va_start(ap, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 's')
			{
				ft_putstr((char *)va_arg(ap, char *));
				count += ft_strlen((char *)va_arg(ap, char *));
			}
			else if (format[i] == 'c')
			{
				ft_putchar((char)va_arg(ap, int));
				count++;
			}
			else if (format[i] == 'd')
			{
				ft_putnbr((int)va_arg(ap, int));
				count += size_int((int)va_arg(ap, int));
				ft_putnbr(count);
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
	ft_putchar('\n');
	ft_putnbr(count);
	return (count);
}

int		main(void)
{
	ft_printf("%d", 42);
}
