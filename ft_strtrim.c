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

int	is_in_set(char c, char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*trim_str(char const *s1, char const *set)
{
	size_t	i;
	size_t	bgn;
	size_t	end;
	char	*trimmed;

	i = 0;
	bgn = 0;
	end = ft_strlen(s1) - 1;
	while (is_in_set(s1[bgn], (char *)set))
		bgn++;
	while (is_in_set(s1[end], (char *)set))
		end--;
	trimmed = malloc(sizeof(char) * (end - bgn + 2));
	if (trimmed == 0)
		return (0);
	while (bgn <= end)
	{
		trimmed[i] = s1[bgn];
		i++;
		bgn++;
	}
	trimmed[i] = '\0';
	return (trimmed);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char		*trimmed;

	if (s1 == NULL)
		return (NULL);
	if (set == NULL || ft_strlen(set) == (size_t) NULL)
		return ((char *)s1);
	trimmed = trim_str(s1, set);
	return (trimmed);
}

// #include <stdio.h>
// int	main()
// {
// 	const char	*s1		= "abcd145dcba";
// 	const char	*s2		= "123abcdefg2231412311";
// 	const char	*s3		= " \t  abcde   \n";
// 	const char	*s4		= "134423414134";
// 	const char	*s5		= NULL;
// 	const char	*set1	= "";
// 	const char	*set2	= "1234";
// 	const char	*set3	= NULL;
// 	const char	*set4	= " \n\t";
// 	puts("\nft_strtrim-----\n");
// 	printf("(s1, set1) : %s\n", ft_strtrim(s1, set1));
// 	printf("(s2, set2) : %s\n", ft_strtrim(s2, set2));
// 	printf("(s3, set4) : %s\n", ft_strtrim(s3, set4));
// 	printf("(s3, set3) : %s\n", ft_strtrim(s3, set3));
// 	printf("(s4, set3) : %s\n", ft_strtrim(s4, set3));
// 	printf("(s5, set4) : %s\n", ft_strtrim(s5, set4));
// 	puts("\n");
// }