/* ************************************************************************************ */
/*   c02_ex06: ft_str_is_printable                                                      */
/*                                                                   :::      ::::::::  */
/*   Instructions:                                                 :+:      :+:    :+:  */
/*                                                               +:+ +:+         +:+    */
/*   Create a function that returns:                           +#+  +:+       +#+       */
/*      1 if the string given as a parameter contains only   +#+#+#+#+#+   +#+          */
/*        printable characters, and                               #+#    #+#            */
/*      0 if it contains any other character.                    ###   ########.fr      */
/*      It should return 1 if str is empty.                                             */
/*                                                                                      */
/*   Here’s how it should be prototyped :                                               */
/*                                                                                      */
/*      int ft_str_is_printable(char *str);                                             */
/*                                                                                      */
/* ************************************************************************************ */

// [Line 28] 32 and 126 are ASCII (decimal) codes of printable characters.
// Note: code 32 is ' ' (space).

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 32 && str[i] <= 126))
			i++;
		else
			return (0);
	}
	return (1);
}

// to test ft_str_is_printable:
// uncomment internal main.c (lines 38-60):
/*
#include <stdio.h>

int main(void)
{
	char	*str;

	printf("\n");

	str = "A";
	printf("A is printable? (yes = 1; no = 0) %d\n\n", ft_str_is_printable(str));

	str = "";
	printf("Return 1 for empty str? %d\n\n", ft_str_is_printable(str));

	str = "\n";
	printf("nl is printable? (yes = 1; no = 0) %d\n\n",ft_str_is_printable(str));

	return (0);
}
*/