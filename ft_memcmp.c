/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtayama <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 19:07:28 by mtayama           #+#    #+#             */
/*   Updated: 2023/03/06 16:52:26 by mtayama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *buf1, const void *buf2, size_t n)
{
	unsigned char	*buf1_cp;
	unsigned char	*buf2_cp;
	size_t			i;

	buf1_cp = (unsigned char *)buf1;
	buf2_cp = (unsigned char *)buf2;
	i = 0;
	if (n <= 0)
		return (0);
	while (i < n)
	{
		if (buf1_cp[i] != buf2_cp[i])
		{
			return ((int)(buf1_cp[i] - buf2_cp[i]));
		}
		else
		{
			i++;
		}
	}
	return (0);
}
