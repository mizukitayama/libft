/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtayama <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 18:26:19 by mtayama           #+#    #+#             */
/*   Updated: 2022/10/14 18:26:20 by mtayama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// returns the pointer when matches to c(converted to char), searching from back of the string
int handle_chr(int c)
{
	while (c > 256)
	{
		c -= 256;
	}
	return (c);
}

char *ft_strrchr(const char *s, int c)
{
	int len_s;

	len_s = ft_strlen(s);
	c = handle_chr(c);
	while (len_s >= 0)
	{
		if (s[len_s] == c)
			return ((char*)&s[len_s]);
		len_s--;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	printf("%s", ft_strrchr("tripouille", 'p'));
// }