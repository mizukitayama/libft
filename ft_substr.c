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

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*t;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	start--;
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
	t[j] = '\0';
	return (t);
}
