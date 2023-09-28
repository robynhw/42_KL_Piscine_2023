/* **************************************************************************************** */
/*   c02_ex00: ft_strcpy                                                                    */
/*                                                                       :::      ::::::::  */
/*   Instructions:                                                     :+:      :+:    :+:  */
/*                                                                   +:+ +:+         +:+    */
/*   Reproduce the behavior of the function strcpy (man strcpy).   +#+  +:+       +#+       */
/*                                                               +#+#+#+#+#+   +#+          */
/*   Here’s how it should be prototyped :                             #+#    #+#            */
/*                                                                   ###   ########.fr      */
/*      char *ft_strcpy(char *dest, char *src);                                             */
/*                                                                                          */
/* **************************************************************************************** */

// strcpy() function copies the string pointed to by src, including the terminating null
//   byte ('\0'), to the buffer pointed to by dest. The strings may not overlap,
//   and the destination string dest must be large enough to receive the copy.
//
// Parameters:
// dest − The pointer to the destination array where the content is to be copied.
// src  − The string to be copied.

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// to test ft_strcpy:
// uncomment internal main.c (lines 38-52):
/*
#include <stdio.h>

int	main(void)
{
	char	src1[] = "twenty";
	char	dest2[] = "fourtyfive";

	printf("Copied %s\n", src1);
	printf("Destination before paste: %s\n", dest2);
	ft_strcpy(dest2, src1);
	printf("Destination after paste: %s\n", dest2);
	return (0);
}
*/