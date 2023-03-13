/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtayama <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 18:44:03 by mtayama           #+#    #+#             */
/*   Updated: 2022/10/18 14:42:35 by mtayama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *buf, int ch, size_t n)
{
	size_t			i;
	unsigned char	*buf_cp;

	buf_cp = (unsigned char *)buf;
	i = 0;
	while (i < n)
	{
		if (buf_cp[i] == (unsigned char)ch)
		{
			return ((void *)&buf_cp[i]);
		}
		i ++;
	}
	return (NULL);
}
