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
	if (fd < 0 || !s)
		return ;
	write(fd, (const void *)s, ft_strlen(s));
}

// int main()
// {
// 	char *s = NULL;
// 	int fd = 1;
// 	ft_putstr_fd(s, fd);
// }
