#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

//#include <stdio.h>
//int main()
//{
//	int fd = 1;
//	char c = 'a';
//	ft_putchar_fd(c, fd);
//	puts("\n");
//}

