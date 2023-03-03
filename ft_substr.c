/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtayama <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 15:39:45 by mtayama           #+#    #+#             */
/*   Updated: 2022/10/18 15:39:49 by mtayama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *t;
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	if (len == 0)
	{
		t = malloc(sizeof(char) * 1);
		t[0] = '\0';
		return (t);
	}
	if (!s || start >= ft_strlen(s))
	{
		t = malloc(sizeof(char) * 1);
		if (t == 0)
			return (0);
	}
	else
	{
		while (s[start + i] && i < len)
		{
			i++;
		}
		if (i == 0)
			return (0);
		t = malloc(sizeof(char) * (i + 1));
		if (t == 0)
			return (0);
		while (j < i)
		{
			t[j] = s[j + start];
			j++;
		}
	}

	t[j] = '\0';
	return (t);
}

// #include <stdio.h>
// int main()
// {
// 	char *str = ft_strdup("0123456789");
// 	char *s = ft_substr("42", 0, 0);
// 	printf("%s", s);
// 	// char *str = "qweryth";
// 	// size_t size = 2;
// 	// printf("%s", ft_substr(str, 2, size));
// }