/* *************************************************************************************************** */
/*   c01_ex04: ft_ultimate_div_mod                                                                     */
/*                                                                                  :::      ::::::::  */
/*   Instructions:                                                                :+:      :+:    :+:  */
/*                                                                              +:+ +:+         +:+    */
/*   Create a function ft_ultimate_div_mod with the following prototype :     +#+  +:+       +#+       */
/*                                                                          +#+#+#+#+#+   +#+          */
/*      void ft_ultimate_div_mod(int *a, int *b);                                #+#    #+#            */
/*                                                                              ###   ########.fr      */
/*   This function divides parameters a by b.                                                          */
/*      The result of this division is stored in the int pointed by a.                                 */
/*      The remainder of the division is stored in the int pointed by b.                               */
/*                                                                                                     */
/* *************************************************************************************************** */


void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = temp / *b;
	*b = temp % *b;
}

// to test ft_ultimate_div_mod:
// uncomment internal main.c (lines 28-46):
/*
#include <stdio.h>

int	main(void)
{	
	int	a;
	int	b;

	a = 97;
	b = 10;

	printf("a = %d\n", a);
	printf("b = %d\n", b);
	ft_ultimate_div_mod(&a, &b);
	printf("a div b = %d\n", a);
	printf("a mod b = %d\n", b);
	return (0);
}
*/