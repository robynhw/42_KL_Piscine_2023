/* ******************************************************************************************* */
/*   c02_ex02: ft_str_is_alpha                                                                 */
/*                                                                          :::      ::::::::  */
/*   Instructions:                                                        :+:      :+:    :+:  */
/*                                                                      +:+ +:+         +:+    */
/*   Create a function that returns 1 if the string given as a        +#+  +:+       +#+       */
/*      parameter contains only alphabetical characters, and        +#+#+#+#+#+   +#+          */
/*      0 if it contains any other character. It should                  #+#    #+#            */
/*      return 1 if str is empty.                                       ###   ########.fr      */
/*                                                                                             */
/*   Here’s how it should be prototyped :                                                      */
/*                                                                                             */
/*      int ft_str_is_alpha(char *str);                                                        */
/*                                                                                             */
/* ******************************************************************************************* */


int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			++i;
		else if (str[i] >= 'A' && str[i] <= 'Z')
			++i;
		else
			return (0);
	}
	return (1);
}

// to test ft_str_is_alpha:
// uncomment internal main.c (lines 37-70):
/*
#include <stdio.h>

int main(void)
{
	char	*str;

	printf("\n");

	str = "ABCabc";
	printf("Combination: %s\n", str);
	printf("All alphabets? (yes = 1; no = 0)? %i\n\n", ft_str_is_alpha(str));

	str = "";
	printf("Empty string test: %s\n", str);
	printf("Print 1? %i\n\n", ft_str_is_alpha(str));

	str = "ABC1E";
	printf("Combination: %s\n", str);
	printf("All alphabets? (yes = 1; no = 0)? %i\n\n", ft_str_is_alpha(str));
	
	str = "ABC@i";
	printf("Combination: %s\n", str);
	printf("All UPPERCASE alpphabets? (yes = 1; no = 0)? %i\n\n", 
		ft_str_is_alpha(str));
	
	str = "ABC[D";
	printf("Combination: %s\n", str);
	printf("All UPPERCASE alphabets? (yes = 1; no = 0)? %i\n\n",
		ft_str_is_alpha(str));
	
	return (0);
}
*/