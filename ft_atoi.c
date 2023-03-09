/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtayama <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 14:40:27 by mtayama           #+#    #+#             */
/*   Updated: 2023/03/06 16:25:57 by mtayama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	my_atoi(char *nptr, long i, long sign)
{
	size_t	j;

	j = 0;
	while (nptr[j] && ft_isdigit((int)nptr[j]))
	{
		i = (i * 10) + (nptr[j] - 48);
		if ((i > (LONG_MAX / 10) && nptr[j + 1] != '\0')
			|| ((i == (LONG_MAX / 10))
				&& ((long)(nptr[j + 1] - 48) > (LONG_MAX % 10))))
		{
			if (sign == 1)
			{
				return ((int)LONG_MAX);
			}
			if (sign == -1)
				return ((int)LONG_MIN);
		}
		j++;
	}
	return ((int)i * sign);
}

int	ft_atoi(const char *nptr)
{
	long	sign;
	long	i;

	sign = 1;
	i = 0;
	while (*nptr == '\t' || *nptr == '\n' || *nptr == '\v'
		|| *nptr == '\f' || *nptr == '\r' || *nptr == ' ')
	{
		nptr++;
	}
	if (*nptr == '-')
	{
		sign = -1;
		nptr++;
	}
	else if (*nptr == '+')
	{
		nptr++;
	}
	return (my_atoi((char *)nptr, i, sign));
}

// #include <stdio.h>
// int main()
// {
// 	printf("%d\n", ft_atoi("-2147483648"));
// 	printf("%d\n", ft_atoi("0"));
// 	printf("%d\n", ft_atoi("-100"));
// 	printf("%d\n", ft_atoi("-+100"));
// 	printf("%d\n", ft_atoi("++100"));
// 	printf("%d\n", ft_atoi("2147483647"));
// 	printf("%d\n", ft_atoi(""));
// 	printf("%d\n", atoi("\t \v \f\r\n\f-1  "));
// 	printf("%d\n", ft_atoi(" \e-54431  "));
// 	// unsigned long x = 9223372036854775808;
// 	// int y = (int)x;
// 	// printf("%d", y);
// 	printf("%d\n", ft_atoi("9223372036854775806"));
// 	// printf("%d", atoi("9223372036854775806"));
// 	// printf("%lu,\n%lu", LONG_MAX / 10, LONG_MAX % 10);
// }