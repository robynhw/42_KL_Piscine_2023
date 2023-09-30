/* ******************************************************************************************* */
/*   c03_ex02: ft_strcat                                                                       */
/*                                                                          :::      ::::::::  */
/*   Instructions:                                                        :+:      :+:    :+:  */
/*                                                                      +:+ +:+         +:+    */
/*   Reproduce the behavior of the function strcat (man strcat).      +#+  +:+       +#+       */
/*                                                                  +#+#+#+#+#+   +#+          */
/*   Here’s how it should be prototyped :                                #+#    #+#            */
/*                                                                      ###   ########.fr      */
/*      char *ft_strcat(char *dest, char *src);                                                */
/*                                                                                             */
/* ******************************************************************************************* */

// strcat concatenates the destination string and the source string, and the
// result is stored in the destination string.
//
// Parameters:
// dest − Destination string.
// src  − Source string.

char	*ft_strcat(char *dest, char *src)
{
	int	j;
	int	k;

	j = 0;
	k = 0;
	while (dest[j] != '\0')
		++j;
	while (src[k] != '\0')
	{
		dest[j] = src[k];
		++j;
		++k;
	}
	dest[j] = '\0';
	return (dest);
}

// to test ft_strcat:
// uncomment internal main.c (lines 42-55):
/*
#include <stdio.h>

int	main(void)
{
	char	desti[20] = "Hello";
	char	src[] = " Goodbye";
	
	printf("String1: %s\n", desti);
	printf("String2: %s\n", src);
	printf("String1 + String2 = %s\n", ft_strcat(desti, src));
	return (0);
}
*/