/* ******************************************************************************************* */
/*   c02_ex01: ft_strncpy                                                                      */
/*                                                                          :::      ::::::::  */
/*   Instructions:                                                        :+:      :+:    :+:  */
/*                                                                      +:+ +:+         +:+    */
/*   Reproduce the behavior of the function strncpy (man strncpy).    +#+  +:+       +#+       */
/*                                                                  +#+#+#+#+#+   +#+          */
/*   Here’s how it should be prototyped :                                #+#    #+#            */
/*                                                                      ###   ########.fr      */
/*      char *ft_strncpy(char *dest, char *src, unsigned int n);                               */
/*                                                                                             */
/* ******************************************************************************************* */

// strncpy copies up to n characters from the string pointed to, by src to dest.
// In a case where the length of src is less than that of n, the remainder of dest will be
// padded with null bytes.
//
// Parameters:
// dest − The pointer to the destination array where the content is to be copied.
// src  − The string to be copied.
// n    − The number of characters to be copied from source (ie. max size of dest array).

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

// to test ft_strncpy:
// uncomment internal main.c (lines 43-56):
/*
int	main(void)
{
	char	str1[] = "Ha";
	char	str2[] = "Hello";
	
	printf("Src before strncpy = %s\n", str1);
	printf("Dest before strncpy = %s\n", str2);
	ft_strncpy(str2, str1, 5);	
	printf("New destination = %s\n", str2);
	printf("Src = %s\n", str1);
	return (0);
}
*/