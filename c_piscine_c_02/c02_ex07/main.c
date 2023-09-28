// external main.c to test c02_ex07 : ft_strupcase.c

#include <stdio.h>

char	*ft_strupcase(char *str);

int main(void)
{
	char 	str[] = "abracadabra";
	ft_strupcase(str);
	printf("%s\n", str);
	return (0);
}
