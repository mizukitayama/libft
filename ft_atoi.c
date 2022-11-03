/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtayama <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 14:40:27 by mtayama           #+#    #+#             */
/*   Updated: 2022/10/18 14:40:54 by mtayama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	mon_atoi(char *nptr, long i)
{
	while (*nptr && ft_isdigit(*nptr))
	{
		i += *nptr - 48;
		i *= 10;
		nptr++;
	}
	i /= 10;
	return (i);
}

int	ft_atoi(const char *nptr)
{
	int		sign;
	long	i;

	sign = 0;
	i = 0;
	if (*nptr == '-')
	{
		sign = 1;
		nptr++;
	}
	else if (*nptr == '+')
	{
		nptr++;
	}
	i = mon_atoi((char *)nptr, i);
	if (sign == 1)
		i *= -1;
	return (i);
}

// #include <stdio.h>
// int main()
// {
// 	puts("\nft_atoi-----\n");
// 	printf("%d\n", ft_atoi("-2147483648"));
// 	printf("%d\n", ft_atoi("-100"));
// 	printf("%d\n", ft_atoi("0"));
// 	printf("%d\n", ft_atoi("100"));
// 	printf("%d\n", ft_atoi("12345"));
// 	printf("%d\n", ft_atoi("2147483647"));
// }