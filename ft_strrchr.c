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

char	*ft_strrchr(const char *s, int c)
{
	int	len_s;

	len_s = 0;
	while (*s)
	{
		s++;
		len_s++;
	}
	while (len_s > 0)
	{
		if (*s == c)
		{
			return ((char *)s);
		}
		s--;
		len_s--;
	}
	return (0);
}
