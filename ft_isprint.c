/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtayama <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 14:21:55 by mtayama           #+#    #+#             */
/*   Updated: 2022/10/08 14:21:57 by mtayama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 33 && c <= 126)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

// #include <stdio.h>
// int main()
// {
// 	puts("\nft_isprint----\n");
// 	printf("'0' -> %d\n", ft_isprint('0'));
// 	printf("'9' -> %d\n", ft_isprint('1'));
// 	printf("'a' -> %d\n", ft_isprint('a'));
// 	printf("'\t' -> %d\n", ft_isprint('\t'));
// 	printf("0 -> %d\n", ft_isprint(0));
// }