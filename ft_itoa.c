/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtayama <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 13:41:34 by mtayama           #+#    #+#             */
/*   Updated: 2023/03/06 16:51:41 by mtayama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_len(int n, int accumulator)
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

static void	convert_int_to_str(int n, char *str)
{
	size_t	i;
	int		n_cp;

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

static char	*my_itoa(int n)
{
	size_t	len;
	char	*str;
	size_t	flag;

	flag = 0;
	len = count_len(n, 0);
	if (n < 0)
	{
		str = (char *)malloc(sizeof(char) * (len + 2));
	}
	else
	{
		str = (char *)malloc(sizeof(char) * (len + 1));
	}
	if (str == NULL)
		return (NULL);
	if (n < 0)
	{
		flag = 1;
		str[0] = '-';
		n *= -1;
	}
	convert_int_to_str(n, str + flag);
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;

	if (n != -2147483648)
	{
		str = my_itoa(n);
	}
	else
	{
		str = ft_strdup("-2147483648");
	}
	return (str);
}

// #include <stdio.h>
// int main()
// {
// 	puts("\nft_itoa-----\n");

// 	printf("%s\n", ft_itoa(-100));
// 	printf("%s\n", ft_itoa(0));
// 	printf("%s\n", ft_itoa(100));
// 	printf("%s\n", ft_itoa(12345));
// 	printf("%s\n\n", ft_itoa(2147483647));
// 	printf("%s\n", ft_itoa(-12345));
// }
