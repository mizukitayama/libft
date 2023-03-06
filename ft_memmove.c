/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtayama <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 18:25:27 by mtayama           #+#    #+#             */
/*   Updated: 2022/10/14 18:25:30 by mtayama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *buf1, const void *buf2, size_t n)
{
	unsigned char	*c_buf1;
	unsigned char	*c_buf2;
	size_t			i;

	if ((buf1 == NULL && buf2 == NULL) || !n)
	{
		return (buf1);
	}
	c_buf1 = (unsigned char *)buf1;
	c_buf2 = (unsigned char *)buf2;
	i = 0;
	if (buf1 < buf2)
	{
		while (n > i)
		{
			c_buf1[i] = c_buf2[i];
			i++;
		}
	}
	else
	{
		while (n > i)
		{
			c_buf1[n - i - 1] = c_buf2[n - i - 1];
			i++;
		}
	}
	return (buf1);
}

// #include <stdio.h>
// int main()
// {
// 	char str[] = "abcdefghijklmnopqrstu";
// 	printf("移動前：%s\n", str);
// 	ft_memmove(str + 5, str, 10);
// 	printf("移動後：%s\n", str);
// }