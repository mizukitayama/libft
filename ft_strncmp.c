/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtayama <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 18:28:26 by mtayama           #+#    #+#             */
/*   Updated: 2023/03/08 16:28:45 by mtayama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*s1_cp;
	unsigned char	*s2_cp;

	i = 0;
	s1_cp = (unsigned char *)s1;
	s2_cp = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while ((s1_cp[i] || s2_cp[i]) && i < n)
	{
		if (s1_cp[i] > s2_cp[i])
		{
			return ((int)s1_cp[i] - s2_cp[i]);
		}
		else if (s1_cp[i] < s2_cp[i])
		{
			return ((int)s1_cp[i] - s2_cp[i]);
		}
		else
		{
			i++;
		}
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	printf("%d\n",strncmp("hello", NULL, 0));
// 	printf("%d\n",strncmp(NULL, "hello", 0));
// 	printf("%d\n",strncmp(NULL, NULL, 0));
// }
