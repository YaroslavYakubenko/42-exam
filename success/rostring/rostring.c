/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyakuben <yyakuben@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 16:19:02 by yyakuben          #+#    #+#             */
/*   Updated: 2024/05/28 20:04:08 by yyakuben         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

char	*first_word(char *str)
{
	int	i;
	int	j;
	char	*first_word;

	i = 0;
	j = 0;
	while (str[i] && (str[i] == ' ' || str[i] == '\t'))
		i++;
	while (str[i] && (str[i] != ' ' && str[i] != '\t'))
	{
		i++;
		j++;
	}
	first_word = malloc(sizeof(char) * (j + 1));
	if (!first_word)
		return (NULL);
	i = i - j;
	j = 0;
	while (str[i] && (str[i] != ' ' && str[i] != '\t'))
	{
		first_word[j] = str[i];
		i++;
		j++;
	}
	first_word[j] = '\0';
	return (first_word);
}

char	*rest_of_the_words(char *str)
{
	int		i;
	int		j;
	char	*rest_of_the_words;

	i = 0;
	j = 0;
	while (str[i] && (str[i] == ' ' || str[i] == '\t'))
		i++;
	while (str[i] && (str[i] != ' ' && str[i] != '\t'))
		i++;
	while (str[i] && (str[i] == ' ' || str[i] == '\t'))
		i++;
	while (str[i])
	{
		while (str[i] && (str[i] != ' ' && str[i] != '\t'))
		{
			i++;
			j++;
		}
		while (str[i] && (str[i] == ' ' || str[i] == '\t'))
			i++;
		j++;
	}
	rest_of_the_words = malloc(sizeof(char) * (j + 1));
	if (!rest_of_the_words)
		return (NULL);
	i = 0;
	j = 0;
	while (str[i] && (str[i] == ' ' || str[i] == '\t'))
		i++;
	while (str[i] && (str[i] != ' ' && str[i] != '\t'))
		i++;
	while (str[i] && (str[i] == ' ' || str[i] == '\t'))
		i++;
	while (str[i])
	{
		while (str[i] && (str[i] != ' ' && str[i] != '\t'))
		{
			rest_of_the_words[j] = str[i];
			i++;
			j++;
		}
		while (str[i] && (str[i] == ' ' || str[i] == '\t'))
			i++;
		rest_of_the_words[j] = ' ';
		j++;
	}
	rest_of_the_words[j] = '\0';
	return (rest_of_the_words);
}

int	main(int ac, char **av)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	// if (ac <= 2)
	// {
		char *str2 = rest_of_the_words(av[1]);
		while (str2[j])
		{
			write(1, &str2[j], 1);
			j++;
		}
		char *str = first_word(av[1]);
		while (str[i])
		{
			write(1, &str[i], 1);
			i++;
		}
		free(str);
			
	// }
	write(1, "\n", 1);
	return (0);
}