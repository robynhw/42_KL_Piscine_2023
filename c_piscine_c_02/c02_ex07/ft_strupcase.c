/* ******************************************************************************************* */
/*   c02_ex07: ft_strupcase                                                                    */
/*                                                                          :::      ::::::::  */
/*   Instructions:                                                        :+:      :+:    :+:  */
/*                                                                      +:+ +:+         +:+    */
/*   Create a function that transforms every letter to uppercase.     +#+  +:+       +#+       */
/*      It should return str.                                       +#+#+#+#+#+   +#+          */
/*                                                                       #+#    #+#            */
/*   Here’s how it should be prototyped :                               ###   ########.fr      */
/*                                                                                             */
/*      char *ft_strupcase(char *str);                                                         */
/*                                                                                             */
/* ******************************************************************************************* */


char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		++i;
	}
	return (str);
}

// to test ft_strupcase:
// uncomment internal main.c (lines 32-42):
/*
#include <stdio.h>

int main(void)
{
	char 	str[] = "abracadabra";
	ft_strupcase(str);
	printf("%s\n", str);
	return (0);
}
*/