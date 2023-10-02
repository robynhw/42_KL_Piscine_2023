/* *********************************************************************************** */
/*   c05_ex05: ft_sqrt                                                                 */
/*                                                                  :::      ::::::::  */
/*   Instructions:                                                :+:      :+:    :+:  */
/*                                                              +:+ +:+         +:+    */
/*   1. Create a function that returns:                       +#+  +:+       +#+       */
/*        the square root of a number (if it exists), or    +#+#+#+#+#+   +#+          */
/*        0 if the square root is an irrational number.          #+#    #+#            */
/*   2. Here’s how it should be prototyped :                    ###   ########.fr      */
/*                                                                                     */
/*        int ft_sqrt(int nb);                                                         */
/*                                                                                     */
/* *********************************************************************************** */

int	ft_sqrt(int nb)
{
	int	root;

	root = 1;
	while (root <= nb)
	{
		if (root * root == nb && root <= 46340)
			return (root);
		else if (root * root > nb)
			return (0);
		root++;
	}
	return (0);
}

// to test ft_sqrt:
// uncomment internal main.c (lines 33-45):
/*
#include <stdio.h>

int	main(void)
{
	int	nb;

	nb = 4;
	ft_sqrt(nb);
	printf("%d\n", ft_sqrt(nb));
	return (0);
}
*/