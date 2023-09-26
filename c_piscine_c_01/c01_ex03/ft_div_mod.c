/* *************************************************************************************************** */
/*   c01_ex03: ft_div_mod                                                                              */
/*                                                                                  :::      ::::::::  */
/*   Instructions:                                                                :+:      :+:    :+:  */
/*                                                                              +:+ +:+         +:+    */
/*   Create a function ft_div_mod prototyped like this :                      +#+  +:+       +#+       */
/*                                                                          +#+#+#+#+#+   +#+          */
/*      void ft_div_mod(int a, int b, int *div, int *mod);                       #+#    #+#            */
/*                                                                              ###   ########.fr      */
/*   This function divides parameters a by b and stores the result in the                              */
/*      int pointed by div. It also stores the remainder of the division of                            */
/*      a by b in the int pointed by mod.                                                              */
/*                                                                                                     */
/* *************************************************************************************************** */


void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// to test ft_div_mod:
// uncomment internal main.c (lines 25-47):
/*
#include <stdio.h>

int	main(void)
{	
	int	a;
	int	b;
	int	div;
	int mod;

	a = 97;
	b = 10;
	div = 0;
	mod = 0;

	printf("a = %d\n", a);
	printf("b = %d\n", b);
	ft_div_mod(97, 10, &div, &mod);
	printf("a div b = %d\n", div);
	printf("a mod b = %d\n", mod);
	return (0);
}
*/