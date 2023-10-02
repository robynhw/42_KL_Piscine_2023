/* ******************************************************************************************* */
/*   c05_ex02: ft_iterative_power                                                              */
/*                                                                          :::      ::::::::  */
/*   Instructions:                                                        :+:      :+:    :+:  */
/*                                                                      +:+ +:+         +:+    */
/*   1. Create an iterated function that returns the value of a       +#+  +:+       +#+       */
/*        power applied to a number.                                +#+#+#+#+#+   +#+          */
/*   2. A power lower than 0 returns 0.                                  #+#    #+#            */
/*   3. Overflows must not be handled.                                  ###   ########.fr      */
/*   4. We’ve decided that 0 power 0 will returns 1.                                           */
/*                                                                                             */
/*   5. Here’s how it should be prototyped :                                                   */
/*                                                                                             */
/*        int ft_iterative_power(int nb, int power);                                           */
/*                                                                                             */
/* ******************************************************************************************* */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	result = 1;
	i = 0;
	if (power < 0)
		return (0);
	else if ((power == 0 && nb == 0) || power == 0)
		return (1);
	else
	{
		while (i < power)
		{
			result *= nb;
			++i;
		}
		return (result);
	}
}

// to test ft_iterative_power:
// uncomment internal main.c (lines 42-55):
/*
/*#include <stdio.h>

int	main(void)
{
	int	nb;
	int	power;

	nb = 2;
	power = 0;
	printf("%d\n", ft_iterative_power(nb, power));
	return (0);
}
*/