// external main.c to test c03_ex03 : ft_strncat.c

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	char	desti[20] = "Hello";
	char	src[] = " Goodbye";

	printf("String1: %s\n", desti);
	printf("String2: %s\n", src);
	printf("String1 + String2 = %s\n", ft_strncat(desti, src, 5));
	return (0);
}
