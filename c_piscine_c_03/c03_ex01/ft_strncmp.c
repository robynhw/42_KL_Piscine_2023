/* ******************************************************************************************* */
/*   c03_ex01: ft_strncmp                                                                      */
/*                                                                          :::      ::::::::  */
/*   Instructions:                                                        :+:      :+:    :+:  */
/*                                                                      +:+ +:+         +:+    */
/*   Reproduce the behavior of the function strncmp (man strncmp).    +#+  +:+       +#+       */
/*                                                                  +#+#+#+#+#+   +#+          */
/*   Here’s how it should be prototyped :                                #+#    #+#            */
/*                                                                      ###   ########.fr      */
/*      int ft_strncmp(char *s1, char *s2, unsigned int n);                                    */
/*                                                                                             */
/* ******************************************************************************************* */

// strncmp compares at most the first n bytes of str1 and str2, character by character; and
// returns an integer value.
//
// If return value is:
//    = 0  both strings are equal (identical).
//    > 0  the first non-matching character in str1 is greater (in ASCII) than that of str2.
//    < 0  the first non-matching character in str1 is lower (in ASCII) than that of str2.
//
// Parameters:
// s1 − This is the first string to be compared.
// s2 − This is the second string to be compared.

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((i < n) && (s1[i] != '\0' || s2[i] != '\0'))
	{	
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		++i;
	}
	return (0);
}

// to test ft_strncmp:
// uncomment internal main.c (lines 42-55):
/*
#include <stdio.h>

int	main(void)
{
	char	*string1;
	char	*string2;

	string1 = "AbCD";
	string2 = "ABeAqwerty";
	printf("String1 - String2 = %d\n", ft_strncmp(string1, string2, 2));
	return (0);
}
*/