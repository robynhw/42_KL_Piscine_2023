/* ************************************************************************************************** */
/*   c05_ex01: ft_recursive_factorial                                                                 */
/*                                                                                 :::      ::::::::  */
/*   Instructions:                                                               :+:      :+:    :+:  */
/*                                                                             +:+ +:+         +:+    */
/*   1. Create a recursive function that returns the factorial of the        +#+  +:+       +#+       */
/*        number given as a parameter.                                     +#+#+#+#+#+   +#+          */
/*   2. If the argument is not valid the function should return 0.              #+#    #+#            */
/*   3. Overflows must not be handled, the function return will be             ###   ########.fr      */
/*        undefined.                                                                                  */
/*                                                                                                    */
/*   4. Here’s how it should be prototyped :                                                          */
/*                                                                                                    */
/*        int ft_recursive_factorial(int nb);                                                         */
/*                                                                                                    */
/* ************************************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb > 0)
		return (nb * ft_recursive_factorial(nb - 1));
	if (nb < 0)
		return (0);
	else
		return (1);
}

// to test ft_recursive_factorial:
// uncomment internal main.c (lines 30-41):
/*
/*#include <stdio.h>

int	main(void)
{
	int	nb;

	nb = 2;
	printf("%d\n", ft_recursive_factorial(nb));
	return (0);
}
*/