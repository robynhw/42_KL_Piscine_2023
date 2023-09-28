/* ************************************************************************************ */
/*   c02_ex04: ft_str_is_lowercase                                                      */
/*                                                                   :::      ::::::::  */
/*   Instructions:                                                 :+:      :+:    :+:  */
/*                                                               +:+ +:+         +:+    */
/*   Create a function that returns:                           +#+  +:+       +#+       */
/*      1 if the string given as a parameter contains only   +#+#+#+#+#+   +#+          */
/*        lowercase alphabetical characters, and                  #+#    #+#            */
/*      0 if it contains any other character.                    ###   ########.fr      */
/*      It should return 1 if str is empty.                                             */
/*                                                                                      */
/*   Here’s how it should be prototyped :                                               */
/*                                                                                      */
/*      int ft_str_is_lowercase(char *str);                                             */
/*                                                                                      */
/* ************************************************************************************ */


int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			i++;
		else
			return (0);
	}
	return (1);
}

// to test ft_str_is_lowercase:
// uncomment internal main.c (lines 36-71):
/*
#include <stdio.h>

int main(void)
{
	char	*str;
	
	printf("\n");
	
	str = "abc";
	printf("Combination: %s\n", str);
	printf("All lowercase alphabets? (yes = 1; no = 0)? %i\n\n", 
		ft_str_is_lowercase(str));

	str = "";
	printf("Empty string test: %s\n", str);
	printf("Print 1? %i\n\n", ft_str_is_lowercase(str));

	str = "abDc";
	printf("Combination: %s\n", str);
	printf("All lowercase alphabets? (yes = 1; no = 0)? %i\n\n", 
		ft_str_is_lowercase(str));

	str = "abc`";
	printf("Combination: %s\n", str);
	printf("All lowercase alphabets? (yes = 1; no = 0)? %i\n\n", 
		ft_str_is_lowercase(str));

	str = "abc{e";
	printf("Combination: %s\n", str);
	printf("All lowercase alphabets? (yes = 1; no = 0)? %i\n\n", 
		ft_str_is_lowercase(str));

	return (0);
}
*/