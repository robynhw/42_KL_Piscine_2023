// external main.c to test c03_ex00 : ft_strcmp.c

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char	*string1;
	char	*string2;

	string1 = "ABCD";
	string2 = "ABCA";
	printf("String1 - String2 = %d\n", ft_strcmp(string1, string2));
	return (0);
}
