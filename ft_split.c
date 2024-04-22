/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtayama <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 11:40:56 by mtayama           #+#    #+#             */
/*   Updated: 2023/03/07 14:27:31 by mtayama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	words;
	size_t	i;

	words = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || !s[i + 1]))
			words++;
		i++;
	}
	return (words);
}

static size_t	count_strlen(char const *s, char c, size_t i)
{
	size_t	len;

	len = 0;
	while (s[i] && s[i] != c)
	{
		i++;
		len++;
	}
	return (len);
}

static void	free_arr(char **strs)
{
	size_t	i;

	i = 0;
	while (strs[i])
	{
		free((void *)strs[i]);
		i++;
	}
	free((void **)strs);
}

static char	**append_arr(char const *s, char c, char **splitted, size_t	words)
{
	size_t	i;
	size_t	j;
	size_t	len;

	i = 0;
	j = 0;
	while (j < words)
	{
		while (s[i] == c)
			i++;
		len = count_strlen(s, c, i);
		splitted[j] = ft_substr(s, (unsigned int)i, len);
		if (splitted[j] == NULL)
		{
			free_arr(splitted);
			return (NULL);
		}
		while (s[i] != c && s[i] != '\0')
			i++;
		j++;
	}
	splitted[j] = NULL;
	return (splitted);
}

char	**ft_split(char const *s, char c)
{
	char		**splitted;
	size_t		words;
	size_t		i;
	size_t		j;

	i = 0;
	j = 0;
	if (s == NULL)
		return (NULL);
	words = count_words(s, c);
	splitted = (char **)malloc(sizeof(char *) * (words + 1));
	if (splitted == NULL)
		return (NULL);
	splitted = append_arr(s, c, splitted, words);
	return (splitted);
}

// #include <stdio.h>
// void print(const char *s, char c)
// {
// 	char	**splitted = ft_split(s, c);
// 	for (int i = 0; i < 7; i++)
// 	{
// 		printf("%s\n", splitted[i]);
// 		printf("size: %lu\n", sizeof(splitted[i]));
// 	}
// }
// int main()
// {
// 	const char	*s1 = "--1-2--3---4----5-----42-";
// 	// const char	*s2 = "a1\na2a3a4\na\n";
// 	// const char	*s3 = NULL;
// 	// const char	c1 = 'a';
// 	// const char	c2 = '\n';
// 	// const char	c3 = 0;
// 	puts("\nft_spilit-----\n");
// 	// puts("(s1, c1):");
// 	print(s1, '-');
// 	// printf("%lu\n", count_words(s1, '-'));
// 	// puts("\n(s2, c2):");
// 	// print(s2, c2);
// 	// puts("\n(s1, c3):");
// 	// print(s1, c3);
// 	// puts("\n");
// }
