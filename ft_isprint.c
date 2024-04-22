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
	return (c >= 32 && c <= 126);
}

// #include <stdio.h>
// #include <ctype.h>
// int main()
// {
// 	puts("\nft_isprint----\n");
// 	printf("'0' -> %d\n", isprint('0'));
// 	printf("'9' -> %d\n", isprint('1'));
// 	printf("'a' -> %d\n", isprint('a'));
// 	printf("'\t' -> %d\n", isprint('\t'));
// 	printf("0 -> %d\n", isprint(0));
// }