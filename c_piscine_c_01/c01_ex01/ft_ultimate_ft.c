/* ******************************************************************************************************** */
/*  c01_ex01: ft_ultimate_ft                                                                                */
/*                                                                                      :::      ::::::::   */
/*  Instructions:                                                                     :+:      :+:    :+:   */
/*                                                                                  +:+ +:+         +:+     */
/*  Create a function that takes a pointer to pointer to pointer                  +#+  +:+       +#+        */
/*     to pointer to pointer to pointer to pointer to pointer                   +#+#+#+#+#+   +#+           */
/*     to pointer to int as a parameter and sets the value "42" to that int.         #+#    #+#             */
/*                                                                                  ###   ########.fr       */
/*  Here’s how it should be prototyped :                                                                    */
/*                                                                                                          */
/*     void ft_ultimate_ft(int *********nbr);                                                               */
/*                                                                                                          */
/* ******************************************************************************************************** */


void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

// to test ft_ultimate_ft:
// uncomment internal main.c (lines 24-56):
/*
#include <stdio.h>

int	main(void)
{
	int	a;
	int	*nbr;
	int	**nbr2;
	int	***nbr3;
	int	****nbr4;
	int	*****nbr5;
	int	******nbr6;
	int	*******nbr7;
	int	********nbr8;
	int	*********nbr9;

	a = 1;
	nbr = &a;
	nbr2 = &nbr;
	nbr3 = &nbr2;
	nbr4 = &nbr3;
	nbr5 = &nbr4;
	nbr6 = &nbr5;
	nbr7 = &nbr6;
	nbr8 = &nbr7;
	nbr9 = &nbr8;

	printf("%d\n", a);
	ft_ultimate_ft(&nbr8);
	printf("%d\n", a);
	return (0);
}
*/