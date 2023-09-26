// external main.c to test c01_ex03 : ft_div_mod.c

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int	a;
	int	b;
	int	div;
	int mod;

	a = 97;
	b = 10;
	div = 0;
	mod = 0;

	printf("a = %d\n", a);
	printf("b = %d\n", b);
	ft_div_mod(97, 10, &div, &mod);
	printf("a div b = %d\n", div);
	printf("a mod b = %d\n", mod);
	return (0);
}
