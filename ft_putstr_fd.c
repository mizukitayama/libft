#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
}

//int main()
//{
//	char *s = "abcDEFG";
//	int fd = 1;
//	ft_putstr_fd(s, fd);
//}

