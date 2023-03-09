/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtayama <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 14:22:20 by mtayama           #+#    #+#             */
/*   Updated: 2022/10/08 14:22:22 by mtayama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	return (c >= 48 && c <= 57);
}

// #include <stdio.h>
// int main()
// {
//	puts("\nft_isdigit----\n");
// 	printf("'0' -> %d\n", ft_isdigit('0'));
// 	printf("'9' -> %d\n", ft_isdigit('1'));
// 	printf("'a' -> %d\n", ft_isdigit('a'));
// 	printf("'\t' -> %d\n", ft_isdigit('\t'));
// 	printf("0 -> %d\n", ft_isdigit(0));
// }