/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyakuben <yyakuben@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 17:12:07 by yyakuben          #+#    #+#             */
/*   Updated: 2024/05/22 17:29:40 by yyakuben         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_nbr(int nbr)
{
	if (nbr > 10)
	{
		ft_nbr(nbr / 10);
		ft_nbr(nbr % 10);
	}
	else
	{
		nbr += '0';
		write(1, &nbr, 1);
	}
}

int	main(void)
{
	int	i;

	i = 1;
	while (i < 101)
	{
		if (i % 3 == 0 && i % 5 == 0)
			write(1, "fizzbuzz", 8);
		else if (i % 3 == 0)
			write(1, "fizz", 4);
		else if (i % 5 == 0)
			write(1, "buzz", 4);
		else
			ft_nbr(i);
		write(1, "\n", 1);
		i++;
	}
}