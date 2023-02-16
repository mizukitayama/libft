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
char *ft_strrchr(const char *s, int c)
{
	size_t len_s;

	len_s = 0;
	while (*s)
	{
		s++;
		len_s++;
	}
	if (len_s == 0)
	{
		return (NULL);
	}
	if (*s == (char)c)
	{
		return ((char *)s);
	}
	while (len_s > 0)
	{
		s--;
		if (*s == (char)c)
		{
			return ((char *)s);
		}
		len_s--;
	}
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	printf("%s", ft_strrchr("abbbbbbbb", 97));
// 	// const char *test_s1 = "abcdabcd";
// 	// const char *test_s2 = "I am I am me!";
// 	// const char *test_s3 = NULL;
// 	// int test_c_a = 97; //a
// 	// int test_c_space = 32; //space
// 	// int test_c_null = 0;
// 	// printf("\nstrrchr(\"abcdabcd\", 97(a)) : %s\n", strrchr(test_s1, test_c_a));
// 	// printf("ft_strrchr(\"abcdabcd\", 97(a)) : %s\n\n", ft_strrchr(test_s1, test_c_a));
// 	// printf("strrchr(\"I am I am me !\", 32(space)) : %s\n", strrchr(test_s2, test_c_space));
// 	// printf("ft_strrchr(\"I am I am me !\", 32(space)) : %s\n\n", ft_strrchr(test_s2, test_c_space));
// 	// printf("strrchr(\"I am I am me !\", 0) : %s\n", strrchr(test_s2, test_c_null));
// 	// printf("ft_strrchr(\"I am I am me !\", 0) : %s\n\n", ft_strrchr(test_s2, test_c_null));
// 	// printf("strrchr(\"\", 0) : %s\n", strrchr(test_s3, test_c_null));
// 	// printf("ft_strrchr(\"\", 0) : %s\n\n", ft_strrchr(test_s3, test_c_null));
// }