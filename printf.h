/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoinier <amoinier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/15 11:11:22 by amoinier          #+#    #+#             */
/*   Updated: 2016/03/18 12:06:07 by amoinier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <stdarg.h>
# include <wchar.h>
# include <stdlib.h>
# include <unistd.h>

void			ft_putchar(char c);
void			ft_putstr(char const *s);
void			ft_putnbr(int n);
void			ft_putunbr(long unsigned int n);
int				ft_power(int nb, int power);
int				ft_atoi(char *s);
size_t			ft_strlen(const char *s);
char			*ft_strdup(const char *s1);
char			*ft_itoa(int n);
char			*ft_uitoa(long unsigned int n);
char			*ft_itoa_base(unsigned long long nb, int nbase);
char			*ft_itoa_basex(unsigned long long nb, int nbase);

int				flag_s(void *donne, const char *format, int i, int count);
int				flag_c(void *donne, const char *format, int i, int count);
int				flag_di(void *donne, const char *format, int i, int count);
int				flag_u(void *donne, const char *format, int i, int count);
int				flag_o(void *donne, const char *format, int i, int count);
int				flag_x(void *donne, const char *format, int i, int count);
int				flag_p(void *donne, const char *format, int i, int count);
int				flag_C(void *donne, const char *format, int i, int count);
int				flag_D(void *donne, const char *format, int i, int count);
int				flag_U(void *donne, const char *format, int i, int count);
int				flag_O(void *donne, const char *format, int i, int count);
int				flag_X(void *donne, const char *format, int i, int count);
int				flag_S(void *donne, const char *format, int i, int count);

#endif
