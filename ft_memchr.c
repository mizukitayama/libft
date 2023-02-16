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
		if (buf_cp[i] == (unsigned char) ch)
		{
			return ((void *)&buf_cp[i]);
		}
		i ++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	puts("\nft_memchr-----\n");
// 	void *buf1 = "abcdef\0hijk";
// 	void *buf2 = NULL;
// 	printf("(buf1, 'h', 10):%s\n", (char *)ft_memchr(buf1, 'h', 10));
// 	printf("(buf1, '\\0', 10):%s\n", (char *)ft_memchr(buf1, '\0', 10));
// 	printf("(buf1, 'b', 10):%s\n", (char *)ft_memchr(buf1, 'b', 10));
// 	printf("(buf1, 'l', 10):%s\n", (char *)ft_memchr(buf1, 'l', 10));
// 	printf("(buf1, 'h', 5):%s\n", (char *)ft_memchr(buf1, 'h', 5));
// 	printf("(buf1, 'h', 0):%s\n", (char *)ft_memchr(buf1, 'h', 0));
// 	printf("(buf2, 'h', 10):%s\n", (char *)ft_memchr(buf2, 'h', 10));
// }