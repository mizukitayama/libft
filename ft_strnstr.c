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

static char	*search(const char *hsk, const char *nl, size_t len, size_t len_n)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (hsk[i] && (len - len_n + 1) > i)
	{
		j = 0;
		while (hsk[i + j] == nl[j])
		{
			if (j == len_n - 1)
			{
				if (i + j < len)
					return ((char *)&hsk[i]);
				else
					return (NULL);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	len_needle;

	len_needle = ft_strlen(needle);
	if (len_needle == 0)
		return ((char *)haystack);
	if (len == 0)
		return (NULL);
	return (search(haystack, needle, len, len_needle));
}
