#include "libft.h"
void write_nbr(int n, int fd)
{
	if (n > 10)
	{
		write_nbr(n / 10, fd);
	}
	write(fd, &"0123456789"[n % 10], 1);
	return;
}

void ft_putnbr_fd(int n, int fd)
{
	if (fd < 0)
		return;
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n *= -1;
	}
	write_nbr(n, fd);
}

// int main()
// {
// 	int n1 = -2143648986;
// 	int fd = 1;
// 	ft_putnbr_fd(n1, fd);
// }