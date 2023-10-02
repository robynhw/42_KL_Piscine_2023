/* ************************************************************************************************** */
/*   c05_ex00: ft_iterative_factorial                                                                 */
/*                                                                                 :::      ::::::::  */
/*   Instructions:                                                               :+:      :+:    :+:  */
/*                                                                             +:+ +:+         +:+    */
/*   1. Create an iterated function that returns a number. This number       +#+  +:+       +#+       */
/*        is the result of a factorial operation based on the number       +#+#+#+#+#+   +#+          */
/*        given as a parameter.                                                 #+#    #+#            */
/*   2. If the argument is not valid the function should return 0.             ###   ########.fr      */
/*   3. Overflows must not be handled, the function return will be undefined.                         */
/*                                                                                                    */
/*   4. Here’s how it should be prototyped :                                                          */
/*                                                                                                    */
/*        int ft_iterative_factorial(int nb);                                                         */
/*                                                                                                    */
/* ************************************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
	{
		return (0);
	}
	else
	{
		while (nb > 0)
		{
			result = result * nb;
			nb--;
		}
		return (result);
	}
}

// to test ft_iterative_factorial:
// uncomment internal main.c (lines 41-52):
/*
#include <stdio.h>

int	main(void)
{
	int	nb;

	nb = 5;
	printf("%d\n", ft_iterative_factorial(nb));
	return (0);
}
*/