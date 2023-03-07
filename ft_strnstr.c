/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtayama <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 14:44:25 by mtayama           #+#    #+#             */
/*   Updated: 2022/10/18 14:44:38 by mtayama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	size_needle;

	i = 0;
	size_needle = 0;
	while (needle[size_needle])
		size_needle++;
	if (size_needle == 0)
	{
		return ((char *)haystack);
	}
	if (len == 0)
	{
		return (NULL);
	}
	while (haystack[i] && (len - size_needle + 1) > i)
	{
		j = 0;
		while (haystack[i + j] == needle[j])
		{
			if (j == size_needle - 1)
			{
				if (i + j < len)
				{
					return ((char *)&haystack[i]);
				}
				else
				{
					return (NULL);
				}
			}
			j++;
		}
		i++;
	}
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	char *str = "libft-test-tokyoaaa";
// 	// printf("%s", strnstr("see FF your FF return FF now FF", "FF", 1));
// 	printf("%s", ft_strnstr(str, "libft-test-tokyo", 15));
// }