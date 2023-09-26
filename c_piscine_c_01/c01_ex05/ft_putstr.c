/* ******************************************************************************************* */
/*   c01_ex05: ft_putstr                                       	           		  			   */
/*                                                  					 	:::      ::::::::  */
/*   Instructions:                                 					 	  :+:      :+:    :+:  */
/*                                                  				    +:+ +:+         +:+    */
/*   Create a function that displays a string of characters on		  +#+  +:+       +#+       */
/*      the standard output.								        +#+#+#+#+#+   +#+	       */
/* 	    																 #+#    #+#		       */
/*   Here’s how it should be prototyped :	       					    ###   ########.fr      */
/*   														      							   */
/*      void ft_putstr(char *str);					   	  					 				   */
/*																							   */
/* ******************************************************************************************* */


void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

// to test ft_putstr:
// uncomment internal main.c (lines 30-43):
/*
#include <unistd.h>

/*void	ft_putstr(char *str);

int	main(void)
{	
	char	*str;

	str = "Twenty";
	ft_putstr(str);
	return (0);
}
*/