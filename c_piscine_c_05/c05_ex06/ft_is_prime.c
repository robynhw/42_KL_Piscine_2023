/* *********************************************************************************************** */
/*   c05_ex06: ft_is_prime                                                                         */
/*                                                                              :::      ::::::::  */
/*   Instructions:                                                            :+:      :+:    :+:  */
/*                                                                          +:+ +:+         +:+    */
/*   1. Create a function that returns:                                   +#+  +:+       +#+       */
/*        1 if the number given as a parameter is a prime number, and   +#+#+#+#+#+   +#+          */
/*        0 if it isn’t.                                                     #+#    #+#            */
/*   2. Here’s how it should be prototyped :                                ###   ########.fr      */
/*                                                                                                 */
/*        int ft_is_prime(int nb);                                                                 */
/*                                                                                                 */
/* *********************************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

// to test ft_is_prime:
// uncomment internal main.c (lines 33-41):
/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_is_prime(23));
	return (0);
}
*/