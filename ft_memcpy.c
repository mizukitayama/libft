/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtayama <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 15:24:51 by mtayama           #+#    #+#             */
/*   Updated: 2022/10/08 15:31:27 by mtayama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//returnのとき、ポインタの場所を変えないために別でインクリメントする
//なんでchar *でコピーするの
//charGPTさん↓
//    int arr1[] = {1, 2, 3, 4, 5};
//    int arr2[5];
//    memcpy(arr2, arr1, sizeof(arr1));
void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	if (!dst && !src)
		return (0);
	while (i < len)
	{
		*(unsigned char*)(dst + i++) = *(unsigned char*)(src++);
	}
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