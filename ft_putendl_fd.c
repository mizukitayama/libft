#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}

// int main()
// {
// 	char *s = "12345";
// 	int fd = 1;
// 	ft_putendl_fd(s, fd);
// }