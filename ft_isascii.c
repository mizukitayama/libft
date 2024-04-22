/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtayama <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 14:22:07 by mtayama           #+#    #+#             */
/*   Updated: 2022/10/08 14:22:09 by mtayama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

// #include <stdio.h>
// int main()
// {
//	puts("\nft_isascii-----\n");
// 	printf("'a' -> %d\n", ft_isascii('a'));
// 	printf("'5' -> %d\n", ft_isascii('5'));
// 	printf("'\t' -> %d\n", ft_isascii('\t'));
// 	printf("0 -> %d\n", ft_isascii(0));
// }