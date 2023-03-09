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

// #include <string.h>
// #include <stdio.h>
// int main()
// {
// 	puts("\nft_memcmp-----\n");
// 	printf("%d\n", ft_memcmp("ABC12\n567", "ABC12\n567", 7));
// 	printf("%d\n", ft_memcmp("ABC12\n456", "ABC12\n567", 7));
// 	printf("%d\n", memcmp("ABC12\n456", "ABC12\n567", 7));
// 	printf("%d\n", ft_memcmp("ABC12\n956", "ABC12\n567", 6));
// 	printf("%d\n", memcmp("ABC12\n956", "ABC12\n567", 6));
// }
