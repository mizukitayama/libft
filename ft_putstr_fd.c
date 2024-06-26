/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtayama <mtayama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 14:25:38 by mtayama           #+#    #+#             */
/*   Updated: 2024/04/22 18:51:56 by mtayama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	i;

	if (!s || fd < 0)
		return ;
	i = ft_strlen(s);
	while (i-- > 0)
		write(fd, (const void *)s++, 1);
}

// int main()
// {
// 	char *s = NULL;
// 	int fd = 1;
// 	ft_putstr_fd(s, fd);
// }
