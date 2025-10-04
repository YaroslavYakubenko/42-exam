/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyakuben <yyakuben@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 22:21:12 by yyakuben          #+#    #+#             */
/*   Updated: 2024/05/30 22:31:27 by yyakuben         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	int	i;
	int	l;

	i = 0;
	l = 0;
	while (s[i])
	{
		l = 0;
		while (reject[l])
		{
			if (s[i] == reject[l])
				return (i);
			l++;
		}
		i++;
	}
	return (i);
}