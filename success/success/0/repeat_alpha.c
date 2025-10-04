/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyakuben <yyakuben@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 19:14:44 by yyakuben          #+#    #+#             */
/*   Updated: 2024/05/22 19:26:38 by yyakuben         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int i;
	int	j;

	j = 0;
	i = 0;
	if (ac == 2)
	{
		while (av[1][i])
		{
			if (av[1][i] >= 'a' && av[1][i] <= 'z')
			{
				j = av[1][i] - 'a';
				while (j >= 0)
				{
					write(1, &av[1][i], 1);
					j--;
				}
			}
			else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
			{
				j = av[1][i] - 'A';
				while (j >= 0)
				{
					write(1, &av[1][i], 1);
					j--;
				}
			}
			else
				write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}