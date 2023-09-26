// external main.c to test c01_ex02 : ft_swap.c

#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int	a;
	int	b;

	a = 2;
	b = 0;
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	ft_swap(&a, &b);
	printf("Now:\na = %d\n", a);
	printf("b = %d\n", b);
	return (0);
}
