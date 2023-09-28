/* ***************************************************************************************** */
/*   c02_ex08: ft_strlowcase                                                                 */
/*                                                                        :::      ::::::::  */
/*   Instructions:                                                      :+:      :+:    :+:  */
/*                                                                    +:+ +:+         +:+    */
/*   Create a function that transforms every letter to lowercase.   +#+  +:+       +#+       */
/*      It should return str.                                     +#+#+#+#+#+   +#+          */
/*                                                                     #+#    #+#            */
/*   Here’s how it should be prototyped :                             ###   ########.fr      */
/*                                                                                           */
/*      char *ft_strlowcase(char *str);                                                      */
/*                                                                                           */
/* ***************************************************************************************** */


char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		++i;
	}
	return (str);
}

// to test ft_strlowcase:
// uncomment internal main.c (lines 32-42):
/*
#include <stdio.h>

int main(void)
{
	char 	str[] = "LOWERCASE";
	ft_strlowcase(str);
	printf("%s\n", str);
	return (0);
}
*/