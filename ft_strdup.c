/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoinier <amoinier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 13:06:15 by amoinier          #+#    #+#             */
/*   Updated: 2016/03/15 11:16:03 by amoinier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*dst;

	i = 0;
	if (!(dst = (char *)malloc(sizeof(*dst) * (ft_strlen(s1) + 1))))
		return (NULL);
	while (s1[i])
	{
		dst[i] = s1[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
