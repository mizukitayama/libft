/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtayama <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 14:23:55 by mtayama           #+#    #+#             */
/*   Updated: 2022/10/08 14:23:57 by mtayama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
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
//	puts("\nft_isalpha-----\n");
// 	printf("'a' -> %d\n", ft_isalpha('a'));
// 	printf("'z' -> %d\n", ft_isalpha('z'));
// 	printf("'5' -> %d\n", ft_isalpha('5'));
// 	printf("'\t' -> %d\n", ft_isalpha('\t'));
// 	printf("0 -> %d\n", ft_isalpha(0));
// }