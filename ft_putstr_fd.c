#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (fd < 0 || !s)
		return;
	write(fd, s, ft_strlen(s));
}

// int main()
// {
// 	char *s = NULL;
// 	int fd = 1;
// 	ft_putstr_fd(s, fd);
// }