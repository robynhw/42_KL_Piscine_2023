/* *************************************************************************************************** */
/*   c06_ex01: ft_print_params                                                                         */
/*                                                                                  :::      ::::::::  */
/*   Instructions:                                                                :+:      :+:    :+:  */
/*                                                                              +:+ +:+         +:+    */
/*   1. We’re dealing with a program here, you should therefore               +#+  +:+       +#+       */
/*        have a function main in your .c file.                             +#+#+#+#+#+   +#+          */
/*   2. Create a program that displays its given arguments.                      #+#    #+#            */
/*   3. One per line, in the same order as in the command line.                 ###   ########.fr      */
/*   4. It should display all arguments, except for argv[0].                                           */
/*   5. Example :                                                                                      */
/*        $>./a.out test1 test2 test3 | cat -e                                                         */
/*        test1$                                                                                       */
/*        test2$                                                                                       */
/*        test3$                                                                                       */
/*        $>                                                                                           */
/*                                                                                                     */
/* *************************************************************************************************** */
// position where j = 0 is important to reset counter)

#include <unistd.h>

int	main(int ac, char *av[])
{
	int	i;
	int	j;

	i = 1;
	while (i < ac)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			write(1, &(av[i][j]), 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
	return (0);
}