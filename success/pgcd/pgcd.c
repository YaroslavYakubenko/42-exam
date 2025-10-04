/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyakuben <yyakuben@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 18:43:49 by yyakuben          #+#    #+#             */
/*   Updated: 2024/05/31 19:12:47 by yyakuben         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	int	num1;
	int	num2;
	int	n;
	if (ac == 3)
	{
		num1 = atoi(av[1]);
		num2 = atoi(av[2]);
		if (num1 >= num2)
			n = num1;
		else
			n = num2;
		while (n > 0)
		{
			if (num1 % n == 0 && num2 % n == 0)
			{
				printf("%d", n);
				break ;
			}
			n--;
		}
	}
	printf("\n");
}