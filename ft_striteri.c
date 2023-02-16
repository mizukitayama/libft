#include "libft.h"
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// #include <stdio.h>
// void mon_toupper(unsigned int i, char *s)
// {
// 	if (97 <= *s && *s <= 122)
//  	{
//  		*s -= 32;
//  	}
// 	printf("La %de lettre: %c\n", i, *s);
// }
// int main()
// {
// 	puts("\nft_striteri-----\n");
// 	char *s = "1234abcdefg";
// 	ft_striteri(s, mon_toupper);
// 	printf("%s\n", s);
// }
