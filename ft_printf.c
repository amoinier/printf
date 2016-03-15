/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoinier <amoinier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/14 16:24:51 by amoinier          #+#    #+#             */
/*   Updated: 2016/03/15 14:26:53 by amoinier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
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
			if (format[i] == 's')
			{
				ft_putstr((char *)donne);
				if ((char *)donne)
					count += ft_strlen((char *)donne);
				else
					count += 6;
			}
			else if (format[i] == 'c')
			{
				ft_putchar((char)donne);
				count++;
			}
			else if (format[i] == 'd' || format[i] == 'i')
			{
				ft_putnbr((int)donne);
				count += ft_strlen(ft_itoa((int)donne));
			}
			else if (format[i] == 'o')
			{
				ft_putstr(ft_itoa_base((unsigned long long)donne, 8));
				count += ft_strlen(ft_itoa_base((unsigned long long)donne, 8));
			}
			else if (format[i] == 'x')
			{
				ft_putstr(ft_itoa_base((unsigned long long)donne, 16));
				count += ft_strlen(ft_itoa_base((unsigned long long)donne, 16));
			}
			else if (format[i] == 'p')
			{
				ft_putstr("0x");
				count += 2;
				ft_putstr(ft_itoa_base((unsigned int)donne, 16));
				count += ft_strlen(ft_itoa_base((unsigned int)donne, 16));
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
	ft_putnbr(printf("%o%o%o%o%o", 1, 100, 999, 42, 999988888));
	ft_putchar('\n');
	ft_putnbr(ft_printf("%o%o%o%o%o", 1, 100, 999, 42, 999988888));
	ft_putchar('\n');
}
