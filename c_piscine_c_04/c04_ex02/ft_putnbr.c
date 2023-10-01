/* *************************************************************************************************** */
/*   c04_ex02: ft_putnbr                                                                               */
/*                                                                                  :::      ::::::::  */
/*   Instructions:                                                                :+:      :+:    :+:  */
/*                                                                              +:+ +:+         +:+    */
/*   Create a function that displays the number entered as a parameter.       +#+  +:+       +#+       */
/*      The function has to be able to display all possible values within   +#+#+#+#+#+   +#+          */
/*      an int type variable.                                                    #+#    #+#            */
/*                                                                              ###   ########.fr      */
/*   E.g: ft_putnbr(42) displays "42"                                                                  */
/*                                                                                                     */
/*   Here’s how it should be prototyped :                                                              */
/*                                                                                                     */
/*      void ft_putnbr(int nb);                                                                        */
/*                                                                                                     */
/* *************************************************************************************************** */

#include <unistd.h>

// helper function used in ft_putnbr-> to write characters to the standard output
void	ft_putchar(char d)
{
	write(1, &d, 1);
}

// main function
void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		write(1, "2147483648", 10);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * -1;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');
}

// to test ft_putnbr:
// uncomment internal main.c (lines 51-63):
/*
#include <stdlib.h>

int	main(int ac, char **av)
{
	int i;

	i = 1;
	if (i < ac)
		ft_putnbr(atoi(av[1]));
	return (0);
}
*/