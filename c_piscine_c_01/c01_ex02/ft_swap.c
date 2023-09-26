/* **************************************************************************************** */
/*   c01_ex02: ft_swap                                                                      */
/*                                                                       :::      ::::::::  */
/*   Instructions:                                                     :+:      :+:    :+:  */
/*                                                                   +:+ +:+         +:+    */
/*   Create a function that swaps the value of two integers        +#+  +:+       +#+       */
/*     whose addresses are entered as parameters.                +#+#+#+#+#+   +#+          */
/*                                                                    #+#    #+#            */
/*   Here’s how it should be prototyped :                            ###   ########.fr      */
/*                                                                                          */
/*      void ft_swap(int *a, int *b);                                                       */
/*                                                                                          */
/* **************************************************************************************** */


void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

// to test ft_swap:
// uncomment internal main.c (lines 27-44):
/*
#include <stdio.h>

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
*/