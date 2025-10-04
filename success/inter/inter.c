/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyakuben <yyakuben@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 21:47:45 by yyakuben          #+#    #+#             */
/*   Updated: 2024/05/30 22:03:51 by yyakuben         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	j;
	int	k;
	int	l;

	i = 0;
	j = 0;
	k = 0;
	l = 0;
	if (ac == 3)
	{
		while (av[1][i])
		{
			l = 0;
			j = 0;
			while (av[2][j])
			{
				if (av[1][i] == av[2][j])
				{
					while (av[1][l])
					{
						if (av[1][i] == av[1][l])
						{
							if (i == l)
								write(1, &av[1][l], 1);
							else if (i != l)
								break ;
						}
						l++;
					}
				}
				j++;
			}
			i++;
		}
	}
	write(1, "\n", 1);
}