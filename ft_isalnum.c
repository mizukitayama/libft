/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtayama <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 14:22:13 by mtayama           #+#    #+#             */
/*   Updated: 2022/10/08 14:22:15 by mtayama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122) || (c >= 48 && c <= 57))
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
//	puts("\nft_isalnum-----\n");
// 	printf("'0' -> %d\n", ft_isalnum('0'));
// 	printf("'9' -> %d\n", ft_isalnum('1'));
// 	printf("'a' -> %d\n", ft_isalnum('a'));
// 	printf("'\t' -> %d\n", ft_isalnum('\t'));
// 	printf("0 -> %d\n", ft_isalnum(0));
// }
