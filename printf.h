/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoinier <amoinier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/15 11:11:22 by amoinier          #+#    #+#             */
/*   Updated: 2016/03/15 14:14:43 by amoinier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

char			*ft_itoa(int n);
void			ft_putchar(char c);
void			ft_putstr(char const *s);
void			ft_putnbr(int n);
int				ft_power(int nb, int power);
int				ft_atoi(char *s);
size_t			ft_strlen(const char *s);
char			*ft_strdup(const char *s1);

char			*ft_itoa_base(unsigned long long nb, int nbase);

#endif
