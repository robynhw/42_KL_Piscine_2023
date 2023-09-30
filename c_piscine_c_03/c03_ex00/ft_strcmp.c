/* ******************************************************************************************* */
/*   c03_ex00: ft_strcmp                                                                       */
/*                                                                          :::      ::::::::  */
/*   Instructions:                                                        :+:      :+:    :+:  */
/*                                                                      +:+ +:+         +:+    */
/*   Reproduce the behavior of the function strcmp (man strcmp).      +#+  +:+       +#+       */
/*                                                                  +#+#+#+#+#+   +#+          */
/*   Here’s how it should be prototyped :                                #+#    #+#            */
/*                                                                      ###   ########.fr      */
/*      int ft_strcmp(char *s1, char *s2);                                                     */
/*                                                                                             */
/* ******************************************************************************************* */

// strcmp compares two strings character by character; and returns an integer value.
//
// If return value is:
//    = 0  both strings are equal (identical).
//    > 0  the first non-matching character in str1 is greater (in ASCII) than that of str2.
//    < 0  the first non-matching character in str1 is lower (in ASCII) than that of str2.
//
// Parameters:
// s1 − This is the first string to be compared.
// s2 − This is the second string to be compared.

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	s2_relative_to_s1;

	i = 0;
	while ((s1[i] != '\0') && (s1[i] == s2[i] && s2[i] != '\0'))
	{
		i++;
	}
	s2_relative_to_s1 = s1[i] - s2[i];
	return (s2_relative_to_s1);
}

// to test ft_strcmp:
// uncomment internal main.c (lines 41-54):
/*
#include <stdio.h>

int	main(void)
{
	char	*string1;
	char	*string2;

	string1 = "ABCD";
	string2 = "ABCA";
	printf("String1 - String2 = %d\n", ft_strcmp(string1, string2));
	return (0);
}
*/