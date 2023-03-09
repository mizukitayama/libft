/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtayama <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 14:25:38 by mtayama           #+#    #+#             */
/*   Updated: 2023/03/07 14:26:10 by mtayama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	i;

	i = ft_strlen(s);
	if (fd < 0 || !s)
		return ;
	while (i-- > 0)
		write(fd, (const void *)s++, 1);
}

// int main()
// {
// 	char *s = NULL;
// 	int fd = 1;
// 	ft_putstr_fd(s, fd);
// }
