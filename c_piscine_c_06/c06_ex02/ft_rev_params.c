/* *************************************************************************************************** */
/*   c06_ex02: ft_rev_params	                                                                       */
/*                                                                                  :::      ::::::::  */
/*   Instructions:                                                                :+:      :+:    :+:  */
/*                                                                              +:+ +:+         +:+    */
/*   1. We’re dealing with a program here, you should therefore               +#+  +:+       +#+       */
/*        have a function main in your .c file.                             +#+#+#+#+#+   +#+          */
/*   2. Create a program that displays its given arguments.                      #+#    #+#            */
/*   3. One per line, in the reverse order of the command line.                 ###   ########.fr      */
/*   4. It should display all arguments, except for argv[0].                                           */
/*   5. Example :                                                                                      */
/*        $>./a.out test1 test2 test3 | cat -e                                                         */
/*        test3$                                                                                       */
/*        test2$                                                                                       */
/*        test1$                                                                                       */
/*        $>                                                                                           */
/*                                                                                                     */
/* *************************************************************************************************** */
/*position where j = 0 is important to reset counter)*/

#include <unistd.h>

int	main(int ac, char *av[])
{
	int	i;
	int	j;

	i = ac - 1;
	while (i > 0)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			write(1, &(av[i][j]), 1);
			j++;
		}
		write(1, "\n", 1);
		i--;
	}
	return (0);
}