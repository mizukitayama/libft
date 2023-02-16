/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtayama <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 13:41:34 by mtayama           #+#    #+#             */
/*   Updated: 2022/10/22 13:45:29 by mtayama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int count_len(int n, int accumulator)
{
	if (n < 0)
	{
		n *= -1;
	}
	if (n < 10)
	{
		return (accumulator + 1);
	}
	else
	{
		return (count_len(n / 10, accumulator + 1));
	}
}

void convert_int_to_str(int n, char *str)
{
	int i;
	int n_cp;

	i = 0;
	n_cp = n / 10;
	while (n_cp)
	{
		i++;
		n_cp /= 10;
	}
	if (n >= 10)
		convert_int_to_str(n / 10, str);
	str[i] = n % 10 + '0';
	str[i + 1] = '\0';
}

char *ft_itoa(int n)
{
	size_t i;
	size_t len;
	char *str;
	int flag;

	if (n != -2147483648)
	{
		i = 0;
		flag = 0;
		len = count_len(n, 0);
		if (n < 0)
		{
			str = malloc(sizeof(char) * (len + 2));
		}
		else
		{
			str = malloc(sizeof(char) * (len + 1));
		}
		if (str == 0)
			return (0);
		if (n < 0)
		{
			flag = 1;
			str[0] = '-';
			n *= -1;
		}
		convert_int_to_str(n, str + flag);
	}
	else
	{
		str = malloc(sizeof(char) * 12);
		ft_strlcpy(str, "-2147483648", 12);
	}
	return (str);
}

// #include <stdio.h>
// int main()
// {
// 	puts("\nft_itoa-----\n");
// 	char* min = ft_itoa(-2147483648);
// 	printf("%s\n", min);
// 	free(min);
// 	// printf("%s\n", ft_itoa(-100));
// 	// printf("%s\n", ft_itoa(0));
// 	// printf("%s\n", ft_itoa(100));
// 	// printf("%s\n", ft_itoa(12345));
// 	// printf("%s\n\n", ft_itoa(2147483647));
// 	// printf("%s\n", ft_itoa(-12345));
// }