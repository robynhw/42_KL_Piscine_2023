/* ******************************************************************************************** */
/*   c02_ex03: ft_str_is_numeric                                                                */
/*                                                                           :::      ::::::::  */
/*   Instructions:                                                         :+:      :+:    :+:  */
/*                                                                       +:+ +:+         +:+    */
/*   Create a function that returns:                                   +#+  +:+       +#+       */
/*      1 if the string given as a parameter contains only digits    +#+#+#+#+#+   +#+          */
/*      0 if it contains any other character.                             #+#    #+#            */
/*      It should return 1 if str is empty.                              ###   ########.fr      */
/*                                                                                              */
/*   Here’s how it should be prototyped :                                                       */
/*                                                                                              */
/*      int ft_str_is_numeric(char *str);                                                       */
/*                                                                                              */
/* ******************************************************************************************** */


int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			i++;
		else
			return (0);
	}
	return (1);
}

// to test ft_str_is_numeric:
// uncomment internal main.c (lines 35-69):
/*
#include <stdio.h>

int main(void)
{
	char	*str;

	printf("\n");

	str = "12345";
	printf("Combination1: %s\n", str);
	printf("All numbers (yes = 1; no = 0)? %i\n\n", ft_str_is_numeric(str));

	str = "";
	printf("Empty string test: %s\n", str);
	printf("Print 1? %i\n\n", ft_str_is_numeric(str));

	str = "12345!1";
	printf("Combination2: %s\n", str);
	printf("All numbers (yes = 1; no = 0)? %i\n\n", ft_str_is_numeric(str));

	str = "12345A";
	printf("Combination2: %s\n", str);
	printf("All numbers (yes = 1; no = 0)? %i\n\n", ft_str_is_numeric(str));

	str = "123-45";
	printf("Combination3: %s\n", str);
	printf("All numbers (yes = 1; no = 0)? %i\n\n", ft_str_is_numeric(str));

	str = "12345~";
	printf("Combination3: %s\n", str);
	printf("All numbers (yes = 1; no = 0)? %i\n\n", ft_str_is_numeric(str));
	return (0);
}
*/