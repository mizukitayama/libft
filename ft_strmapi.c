/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtayama <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 16:24:35 by mtayama           #+#    #+#             */
/*   Updated: 2023/03/08 16:26:39 by mtayama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*t;
	unsigned int	i;

	i = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	t = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (t == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		t[i] = f(i, s[i]);
		i++;
	}
	t[i] = '\0';
	return (t);
}

// #include <stdio.h>
// char mon_toupper(unsigned int i, char c)
// {
// 	if (97 <= c && c <= 122)
// 	{
// 		c -= 32;
// 	}
// 	printf("La %de lettre: %c\n", i+1, c);
// 	return (c);
// }
// int main()
// {
// 	puts("\nft_strmapi-----\n");
// 	printf("%s\n\n", ft_strmapi("abcdefg", mon_toupper));
// }
