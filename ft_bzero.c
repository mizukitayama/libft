/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtayama <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 15:08:39 by mtayama           #+#    #+#             */
/*   Updated: 2023/03/06 16:27:47 by mtayama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;
	size_t			i;

	p = (unsigned char *)s;
	i = 0;
	while (n > i)
	{
		*p++ = 0;
		i ++;
	}
}

// #include <stdio.h>
// #include <strings.h>
// int main()
// {
// 	puts("\nft_bzero-----\n");
// 	char buf1[] = "1234567890";
// 	char *buf2	= NULL;
// 	ft_bzero(buf1+5, 3);
// 	ft_bzero(buf2, 3);
// 	printf("ft_bzero(buf1 + 5, 3): %s\n", buf1);
// 	printf("ft_bzero(buf2 + 5, 3): %s\n", buf2);
// }
