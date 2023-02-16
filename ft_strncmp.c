/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtayama <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 18:28:26 by mtayama           #+#    #+#             */
/*   Updated: 2022/10/18 14:45:02 by mtayama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	unsigned char *s1_cp = (unsigned char *)s1;
	unsigned char *s2_cp = (unsigned char *)s2;

	i = 0;
	while ((s1_cp[i] || s2_cp[i]) && i < n)
	{
		if (s1_cp[i] > s2_cp[i])
		{
			return (s1_cp[i] - s2_cp[i]);
		}
		else if (s1_cp[i] < s2_cp[i])
		{
			return (s1_cp[i] - s2_cp[i]);
		}
		else
		{
			i++;
		}
	}
	return (0);
}
