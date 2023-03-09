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

static char	*copy_slice(char const *s, unsigned int start, size_t len)
{
	char	*t;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s[(size_t)start + i] && i < len)
		i++;
	if (i == 0)
		return (NULL);
	t = (char *)malloc(sizeof(char) * (i + 1));
	if (t == NULL)
		return (NULL);
	while (i > j)
	{
		t[j] = s[j + (size_t)start];
		j++;
	}
	t[j] = '\0';
	return (t);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*t;

	if (len == 0 || !s || (size_t)start >= ft_strlen(s))
	{
		t = (char *)malloc(sizeof(char) * 1);
		if (t == NULL)
			return (NULL);
		t[0] = '\0';
		return (t);
	}
	else
	{
		return (copy_slice(s, start, len));
	}
}

// #include <stdio.h>
// int main()
// {
// 	// char *str = ft_strdup("0123456789");
// 	char *s = ft_substr("423245264", 2, 2);
// 	printf("%s", s);
// 	// char *str = "qweryth";
// 	// size_t size = 2;
// 	// printf("%s", ft_substr(str, 2, size));
// }