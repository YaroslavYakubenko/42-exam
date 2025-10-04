/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyakuben <yyakuben@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 23:57:59 by yyakuben          #+#    #+#             */
/*   Updated: 2024/05/10 00:09:23 by yyakuben         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	int	num1;
	int	num2;
	int	result;

	if (ac == 4)
	{
		num1 = atoi(av[1]);
		num2 = atoi(av[3]);
		if (*av[2] == '+')
			printf("%d\n", num1 + num2);
		if (*av[2] == '-')
			printf("%d\n", num1 - num2);
		if (*av[2] == '*')
			printf("%d\n", num1 * num2);
		if (*av[2] == '/')
			printf("%d\n", num1 / num2);
		if (*av[2] == '%')
			printf("%d\n", num1 % num2);
	}
	else
		write(1, "\n", 1);
	return (0);
}
