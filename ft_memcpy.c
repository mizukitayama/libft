/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtayama <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 15:24:51 by mtayama           #+#    #+#             */
/*   Updated: 2023/03/06 16:57:22 by mtayama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	if (!dst && !src)
		return (NULL);
	while (i < len)
		*(unsigned char *)(dst + i++) = *(unsigned char *)(src++);
	return (dst);
}

// #include <string.h>
// #include <stdio.h>
// int main()
// {
// 	puts("\nft_memcpy-----\n");
// 	char *str = "hello";
// 	char str2[5];
// 	ft_memcpy(str2, str, 5);
// 	printf("%s", str2);
// }
// int main()
// {
//    int arr1[] = {1, 2, 3, 4, 5};
//    int arr2[5];
//    memcpy(arr2, arr1, sizeof(arr1));
//    printf("%d", arr2[1]);
// }