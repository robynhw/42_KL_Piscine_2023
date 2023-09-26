// external main.c to test c01_ex04 : ft_ultimate_div_mod.c

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int	a;
	int	b;

	a = 97;
	b = 10;
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	ft_ultimate_div_mod(&a, &b);
	printf("a div b = %d\n", a);
	printf("a mod b = %d\n", b);
	return (0);
}
