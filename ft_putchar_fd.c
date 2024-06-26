/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtayama <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 14:20:46 by mtayama           #+#    #+#             */
/*   Updated: 2023/03/07 14:21:38 by mtayama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, (const void *)&c, 1);
}

//#include <stdio.h>
//int main()
//{
//	int fd = 1;
//	char c = 'a';
//	ft_putchar_fd(c, fd);
//	puts("\n");
//}
