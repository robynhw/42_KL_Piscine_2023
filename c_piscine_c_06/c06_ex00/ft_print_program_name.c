/* *************************************************************************************************** */
/*   c06_ex00: ft_print_program_name                                                                   */
/*                                                                                  :::      ::::::::  */
/*   Instructions:                                                                :+:      :+:    :+:  */
/*                                                                              +:+ +:+         +:+    */
/*   1. We’re dealing with a program here, you should therefore               +#+  +:+       +#+       */
/*        have a function main in your .c file.                             +#+#+#+#+#+   +#+          */
/*   2. Create a program that displays its own name followed by a new line.      #+#    #+#            */
/*   3. Example :                                                               ###   ########.fr      */
/*                                                                                                     */
/*        $>./a.out | cat -e                                                                           */
/*        ./a.out$                                                                                     */
/*        $>                                                                                           */
/*                                                                                                     */
/* *************************************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	while (av[0][i] != '\0' && ac > 0)
	{
		write(1, &av[0][i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
