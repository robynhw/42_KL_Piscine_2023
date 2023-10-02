/* ****************************************************************************************************** */
/*   c05_ex04: ft_fibonacci                                                                               */
/*                                                                                     :::      ::::::::  */
/*   Instructions:                                                                   :+:      :+:    :+:  */
/*                                                                                 +:+ +:+         +:+    */
/*   1. Create a function ft_fibonacci that returns the n-th element of the      +#+  +:+       +#+       */
/*        Fibonacci sequence, the first element being at the 0 index. We'll    +#+#+#+#+#+   +#+          */
/*        consider that the Fibonacci sequence starts like this: 0, 1, 1, 2.        #+#    #+#            */
/*   2. Overflows must not be handled, the function return will be undefined.      ###   ########.fr      */
/*                                                                                                        */
/*   3. Here’s how it should be prototyped :                                                              */
/*                                                                                                        */
/*        int ft_fibonacci(int index);                                                                    */
/*                                                                                                        */
/* ****************************************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else if (index < 0)
		return (-1);
	else
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

// to test ft_fibonacci:
// uncomment internal main.c (lines 31-39):
/*
#include <stdio.h>

int	main(void)
{
	printf("%d", ft_fibonacci(8));
	return (0);
}
*/