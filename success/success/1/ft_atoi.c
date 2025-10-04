/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyakuben <yyakuben@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 18:23:16 by yyakuben          #+#    #+#             */
/*   Updated: 2024/05/22 18:38:38 by yyakuben         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(const char *str)
{
	int	sig;
	int	i;
	int	nbr;
	
	sig = 1;
	i = 0;
	nbr = 0;
	if (str[0] == '-' || str[0] == '+')
	{
		if (str[0] == '-')
			sig = -1;
		i++;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		nbr = (nbr * 10) + (str[i] - 48);
		i++;
	}
	return (nbr * sig);
}

// int	main (void)
// {
// 	printf("%d\n", ft_atoi("123"));
// }