/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyakuben <yyakuben@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 19:36:03 by yyakuben          #+#    #+#             */
/*   Updated: 2024/05/30 19:48:51 by yyakuben         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	j;
	int	l;

	i = 0;
	j = 0;
	l = 0;
	
	if (ac == 4)
	{
		while (av[2][j])
			j++;
		while (av[3][l])
			l++;
		if (j > 1 || l > 1)
		{
			write(1, "\n", 1);
			return (0);
		}
		while (av[1][i])
		{
			if (av[1][i] == *av[2])
				av[1][i] = *av[3];
			write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	
}