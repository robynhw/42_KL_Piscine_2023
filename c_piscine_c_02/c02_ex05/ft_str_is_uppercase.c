/* ************************************************************************************ */
/*   c02_ex05: ft_str_is_uppercase                                                      */
/*                                                                   :::      ::::::::  */
/*   Instructions:                                                 :+:      :+:    :+:  */
/*                                                               +:+ +:+         +:+    */
/*   Create a function that returns:                           +#+  +:+       +#+       */
/*      1 if the string given as a parameter contains only   +#+#+#+#+#+   +#+          */
/*        uppercase alphabetical characters, and                  #+#    #+#            */
/*      0 if it contains any other character.                    ###   ########.fr      */
/*      It should return 1 if str is empty.                                             */
/*                                                                                      */
/*   Here’s how it should be prototyped :                                               */
/*                                                                                      */
/*      int ft_str_is_uppercase(char *str);                                             */
/*                                                                                      */
/* ************************************************************************************ */


int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			i++;
		else
			return (0);
	}
	return (1);
}

// to test ft_str_is_uppercase:
// uncomment internal main.c (lines 36-71):
/*
#include <stdio.h>

int main(void)
{
	char	*str;

	printf("\n");

	str = "ABC";
	printf("Combination: %s\n", str);
	printf("All UPPERcase alphabets? (yes = 1; no = 0)? %i\n\n",
		ft_str_is_uppercase(str));

	str = "";
	printf("Empty string test: %s\n", str);
	printf("Print 1? %i\n\n", ft_str_is_uppercase(str));

	str = "ABCdE";
	printf("Combination: %s\n", str);
	printf("All UPPERcase alphabets? = 1; no = 0)? %i\n\n",
		ft_str_is_uppercase(str));

	str = "ABC@";
	printf("Combination: %s\n", str);
	printf("All UPPERCASE alpphabets? (yes = 1; no = 0)? %i\n\n",
		ft_str_is_uppercase(str));

	str = "ABC[D";
	printf("Combination: %s\n", str);
	printf("All UPPERCASE alphabets? (yes = 1; no = 0)? %i\n\n",
		ft_str_is_uppercase(str));

	return (0);
}
*/