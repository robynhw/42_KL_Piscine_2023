/* ******************************************************************************************* */
/*   c05_ex03: ft_recursive_power                                                              */
/*                                                                          :::      ::::::::  */
/*   Instructions:                                                        :+:      :+:    :+:  */
/*                                                                      +:+ +:+         +:+    */
/*   1. Create a recursive function that returns the value of a       +#+  +:+       +#+       */
/*        power applied to a number.                                +#+#+#+#+#+   +#+          */
/*   2. A power lower than 0 returns 0.                                  #+#    #+#            */
/*   3. Overflows must not be handled, the function return will         ###   ########.fr      */
/*        be undefined.                                                                        */
/*   4. We’ve decided that 0 power 0 will returns 1.                                           */
/*                                                                                             */
/*   5. Here’s how it should be prototyped :                                                   */
/*                                                                                             */
/*        int ft_recursive_power(int nb, int power);                                           */
/*                                                                                             */
/* ******************************************************************************************* */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}

// to test ft_recursive_power:
// uncomment internal main.c (lines 31-44):
/*
#include <stdio.h>

int	main(void)
{
	int	nb;
	int	power;

	nb = 2;
	power = 3;
	printf("%d\n", ft_recursive_power(nb, power));
	return (0);
}
*/