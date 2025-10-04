/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyakuben <yyakuben@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 19:29:28 by yyakuben          #+#    #+#             */
/*   Updated: 2024/05/29 19:37:33 by yyakuben         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int    lcm(unsigned int a, unsigned int b)
{
	int	ncf;
	int	lcm;
	int	i;

	i = a;
	if (a == 0 || b == 0)
		return (0);
	while (i > 0)
	{
		if (a % i == 0 && b % i == 0)
		{
			break;
		}
		i--;
	}
	lcm = (a * b) / i;
	return (lcm);
}