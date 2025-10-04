/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyakuben <yyakuben@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 20:59:44 by yyakuben          #+#    #+#             */
/*   Updated: 2024/05/28 21:15:35 by yyakuben         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int	main(int ac, char **av)
{
	unsigned int	num1;
	unsigned int	num2;
	int				n;

	if (ac == 3)
	{
		num1 = atoi(av[1]);
		num2 = atoi(av[2]);
		if (num1 > num2)
			n = num1;
		else
			n = num2;
		while (n > 0)
		{
			if (num1 % n == 0 && num2 % n == 0)
			{
				// printf("n = %d\n", n);
				printf("%d\n", n);
				return (0);
			}
			n--;
		}
	}
	printf("\n");
	// write(1, "\n", 1);
	return (0);
}