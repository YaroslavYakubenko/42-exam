/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyakuben <yyakuben@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 20:26:51 by yyakuben          #+#    #+#             */
/*   Updated: 2024/05/29 20:47:59 by yyakuben         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include<stdlib.h>

int	main(int ac, char **av)
{
	int	num;
	int	i;

	i = 2;
	if (ac == 2)
	{
		num = atoi(av[1]);
		if ( num == 1)
			printf ("1");
		else if (num > 1)
		{
			while (num > 1)
			{
				while (num % i == 0)
				{
					num /= i;
					printf("%d", i);
					// printf("num = %d\n", num);
					if (num != 1)
						printf("*");
				}
				i++;
			}
		}
	}
	printf("\n");
}