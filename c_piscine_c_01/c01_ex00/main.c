// external main.c to test c01_ex00 : ft_ft.c

#include <stdio.h>

void	ft_ft(int *nbr);

int	main(void)
{
	int	a;

	a = 1;
	printf("%d\n", a);
	ft_ft(&a);
	printf("%d\n", a);
	return (0);
}
