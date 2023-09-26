// external main.c to test c01_ex06 : ft_strlen.c

#include <stdio.h>

int	ft_strlen(char *str);

int	main(void)
{
	char	*str;

	str = "Twenty1";
	printf("%d\n", ft_strlen(str));
	return (0);
}
