/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoinier <amoinier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 14:11:15 by amoinier          #+#    #+#             */
/*   Updated: 2016/03/15 14:03:02 by amoinier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_putstr(char const *s)
{
	int	i;

	i = 0;
	if (!s || s == NULL || s == 0)
	{
		write(1, "(null)", 6);
		return ;
	}
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
}
