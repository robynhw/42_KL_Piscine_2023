// external main.c to test c03_ex01 : ft_strncmp.c

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char	*string1;
	char	*string2;

	string1 = "AbCD";
	string2 = "ABeAqwerty";
	printf("String1 - String2 = %d\n", ft_strncmp(string1, string2, 2));
	return (0);
}
