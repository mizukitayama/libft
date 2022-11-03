/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtayama <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 15:08:39 by mtayama           #+#    #+#             */
/*   Updated: 2022/10/08 15:15:32 by mtayama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*s_cpy;

	i = 0;
	s_cpy = (unsigned char *)s;
	if (s_cpy == NULL || n == 0)
		return ;
	while (i < n && *s_cpy)
	{
		*s_cpy = 0;
		s_cpy++;
		i++;
	}
}

// #include <stdio.h>
// int main()
// {
//	puts("\nft_bzero-----\n");
// 	char buf1[] = "1234567890";
// 	char *buf2	= NULL;
// 	ft_bzero(buf1+5, 3);
// 	ft_bzero(buf2, 3);
// 	printf("ft_bzero(buf1 + 5, 3): %s\n", buf1);
// 	printf("ft_bzero(buf2 + 5, 3): %s\n", buf2);
// }