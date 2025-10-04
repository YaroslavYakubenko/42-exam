/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyakuben <yyakuben@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 23:21:53 by yyakuben          #+#    #+#             */
/*   Updated: 2024/05/28 23:22:08 by yyakuben         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>


int	value(int nbr)
{
	if (nbr < 0)
		return (-nbr);
	return (nbr);
}

int	get_len(int nbr)
{
	int	len;

	len = 0;
	if (nbr <= 0)
		len++;
	while (nbr != 0)
	{
		len++;
		nbr = nbr / 10;
	}
	return (len);
}

char	*ft_itoa(int nbr)
{
	char	*result;
	int	len;

	len = 0;
	len = get_len(nbr);
	result = malloc(sizeof(int) * (len + 1));
	result[len] = '\0';
	if (nbr < 0)
		result[0] = '-';
	else if (nbr == 0)
		result[0] = '0';
	while (nbr != 0)
	{
		len--;
		result[len] = value(nbr % 10) + '0';
		nbr = nbr / 10;
	}
	return (result);
}