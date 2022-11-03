#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	*str;
	size_t	i;

	i = 0;
	str = ft_itoa(n);
	ft_putstr_fd(str, fd);
}

// int main()
// {
// 	int n1 = 12345;
// 	int fd = 1;
// 	ft_putnbr_fd(n1, fd);
// }