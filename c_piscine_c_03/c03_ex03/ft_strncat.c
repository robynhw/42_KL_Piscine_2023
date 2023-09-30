/* ************************************************************************************************** */
/*   c03_ex03: ft_strncat                                                                             */
/*                                                                                 :::      ::::::::  */
/*   Instructions:                                                               :+:      :+:    :+:  */
/*                                                                             +:+ +:+         +:+    */
/*   Reproduce the behavior of the function strncat (man strncat).           +#+  +:+       +#+       */
/*                                                                         +#+#+#+#+#+   +#+          */
/*   Here’s how it should be prototyped :                                       #+#    #+#            */
/*                                                                             ###   ########.fr      */
/*      char *ft_strncat(char *dest, char *src, unsigned int nb);                                     */
/*                                                                                                    */
/* ************************************************************************************************** */

// strncat will concatenate (add) a maximum of n bytes of src; to the end of the dest string.
// result is stored in the destination string.
// The programmer is responsible for allocating a destination buffer (array size) large enough, that is:
//    dest buffer (ie. array size) = strlen(dest) + nb + 1.
//
// Parameters:
// dest − Pointer to the destination array, which should contain a C string, and should be large
//         enough to contain the concatenated resulting string which includes the additional
//         null-character.
// src  − The string to be appended to the end of destination string.
// nb    − The maximum number of characters of source to be appended to the end of destination.

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	j;
	unsigned int	k;

	j = 0;
	k = 0;
	while (dest[j] != '\0')
		++j;
	while (k < nb && src[k] != '\0')
	{
		dest[j] = src[k];
		++j;
		++k;
	}
	dest[j] = '\0';
	return (dest);
}

// to test ft_strncat:
// uncomment internal main.c (lines 47-60):
/*
#include <stdio.h>

int	main(void)
{
	char	desti[20] = "Hello";
	char	src[] = " Goodbye";
	
	printf("String1: %s\n", desti);
	printf("String2: %s\n", src);
	printf("String1 + String2 = %s\n", ft_strncat(desti, src, 5));
	return (0);
}
*/