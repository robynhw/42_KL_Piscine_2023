/* *************************************************************************************************** */
/*   c01_ex00: ft_ft                                                                		           */
/*                                                  					 	        :::      ::::::::  */
/*   Instructions:                                 					 	          :+:      :+:    :+:  */
/*                                                  					        +:+ +:+         +:+    */
/*   Create a function that takes a pointer to int as a parameter,            +#+  +:+       +#+       */
/*     and sets the value "42" to that int. 		   					    +#+#+#+#+#+   +#+	       */
/* 	   																	         #+#    #+#		       */
/*   Here’s how it should be prototyped :              						    ###   ########.fr      */
/*   																								   */
/*      void ft_ft(int *nbr);																		   */
/*                                                                            						   */
/* *************************************************************************************************** */


void	ft_ft(int *nbr)
{
	*nbr = 42;
}

// to test ft_ft:
// uncomment internal main.c (lines 23-36):
/*
#include <stdio.h>

int	main(void)
{	
	int	a;

	a = 1;
	printf("%d\n", a);
	ft_ft(&a);
	printf("%d\n", a);
	return (0);
}
*/