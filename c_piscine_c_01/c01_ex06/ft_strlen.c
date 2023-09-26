/* *************************************************************************************** */
/*   c01_ex06: ft_strlen                                                                   */
/*                                                                      :::      ::::::::  */
/*   Instructions:                                                    :+:      :+:    :+:  */
/*                                                                  +:+ +:+         +:+    */
/*   Create a function that counts and returns the number of      +#+  +:+       +#+       */
/*      characters in a string.                                 +#+#+#+#+#+   +#+          */
/*                                                                   #+#    #+#            */
/*   Here’s how it should be prototyped :                           ###   ########.fr      */
/*                                                                                         */
/*      int ft_strlen(char *str);                                                          */
/*                                                                                         */
/* *************************************************************************************** */


int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (*str != '\0')
	{
		str++;
		counter++;
	}
	return (counter);
}

// to test ft_strlen:
// uncomment internal main.c (lines 31-42):
/*
#include <stdio.h>

int	main(void)
{	
	char	*str;

	str = "Twenty1";
	printf("%d\n", ft_strlen(str));
	return (0);
}
*/