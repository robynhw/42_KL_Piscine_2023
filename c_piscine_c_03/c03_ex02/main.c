// external main.c to test c03_ex02 : ft_strcat.c

#include <stdio.h>

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	char	desti[20] = "Hello";
	char	src[] = " Goodbye";

	printf("String1: %s\n", desti);
	printf("String2: %s\n", src);
	printf("String1 + String2 = %s\n", ft_strcat(desti, src));
	return (0);
}
