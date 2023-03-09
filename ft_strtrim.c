/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtayama <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 16:48:50 by mtayama           #+#    #+#             */
/*   Updated: 2022/10/18 17:14:51 by mtayama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	is_in_set(char c, char *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

static char	*copy(const char *s1, const char *set, size_t bgn, size_t end)
{
	size_t	i;
	char	*trimmed;

	i = 0;
	while (is_in_set(s1[end], (char *)set) && end > 0)
		end--;
	trimmed = (char *)malloc(sizeof(char) * (end - bgn + 2));
	if (trimmed == NULL)
		return (NULL);
	while (bgn <= end)
	{
		trimmed[i] = s1[bgn];
		i++;
		bgn++;
	}
	trimmed[i] = '\0';
	return (trimmed);
}

static char	*trim_str(const char *s1, const char *set)
{
	size_t	bgn;
	size_t	end;
	char	*trimmed;

	bgn = 0;
	end = ft_strlen(s1) - 1;
	while (is_in_set(s1[bgn], (char *)set))
		bgn++;
	if (bgn == ft_strlen(s1))
	{
		trimmed = (char *)malloc(sizeof(char) * 1);
		if (trimmed == NULL)
			return (NULL);
		trimmed[0] = '\0';
	}
	else
	{
		trimmed = copy(s1, set, bgn, end);
	}
	return (trimmed);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*trimmed;
	size_t	s1_len;

	if (s1 == NULL)
		return (NULL);
	s1_len = ft_strlen(s1);
	if (s1_len == 0)
	{
		trimmed = (char *)malloc(sizeof(char) * 1);
		trimmed[0] = '\0';
		return (trimmed);
	}
	else if (set == NULL || ft_strlen(set) == 0)
	{
		trimmed = (char *)malloc(sizeof(char) * (s1_len));
		ft_strlcpy(trimmed, s1, s1_len + 1);
		return (trimmed);
	}
	else
	{
		trimmed = trim_str(s1, set);
		return (trimmed);
	}
}

// #include <string.h>
// #include <stdio.h>

// int	main()
// {
// 	char* s = ft_strtrim("123   ", " ");
// 	printf("Trimmed is: '%s'\n", s);
// }