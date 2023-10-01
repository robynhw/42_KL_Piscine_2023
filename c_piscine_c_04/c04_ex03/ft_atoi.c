/* ************************************************************************************************************************** */
/*   c04_ex03: ft_atoi                                                                                                        */
/*                                                                                                         :::      ::::::::  */
/*   Instructions:                                                                                       :+:      :+:    :+:  */
/*                                                                                                     +:+ +:+         +:+    */
/*   1. Write a function that converts the initial portion of the string pointed                     +#+  +:+       +#+       */
/*      by str to its int representation.                                                          +#+#+#+#+#+   +#+          */
/*   2. The string can start with an arbitray amount of white space (as determined by isspace(3)).      #+#    #+#            */
/*   3. The string can be followed by an arbitrary amount of + and - signs, - sign will change         ###   ########.fr      */
/*      the sign of the int returned based on the number of - is odd or even.                                                 */
/*   4. Finally the string can be followed by any numbers of the base 10.                                                     */
/*   5. Your function should read the string until the string stop following the rules and return                             */
/*      the number found until now.                                                                                           */
/*   6. You should not take care of overflow or underflow. result can be undefined in that case.                              */
/*   7. Here’s an example of a program that prints the atoi return value:                                                     */
/*        $>./a.out "---+--+1234ab567"                                                                                        */
/*        -1234                                                                                                               */
/*   8. Here’s how it should be prototyped :                                                                                  */
/*                                                                                                                            */
/*        int ft_atoi(char *str);                                                                                             */
/*                                                                                                                            */
/* ************************************************************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	result;
	int	symbol;

	symbol = 1;
	i = 0;
	while (str[i] != '\0' && (str[i] == ' ' || str[i] == '\f'
			|| str[i] == '\n' || str[i] == '\r'
			|| str[i] == '\t' || str[i] == '\v'))
		++i;
	while (str[i] != '\0' && (str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
			symbol *= -1;
		++i;
	}
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{
		result = ((str[i] - '0') + result * 10);
		i++;
	}
	return (result * symbol);
}

// to test ft_atoi:
// uncomment internal main.c (lines 52-63):
/*
#include <stdio.h>

int	main(int ac, char **av)
{
	if (ac <= 1)
		printf("Error- Enter more characters");
	else
		printf("%d", ft_atoi(av[1]));
	return (0);
}
*/