/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 20:38:43 by coder             #+#    #+#             */
/*   Updated: 2023/03/16 15:55:54 by edu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_word_quantity(char const *s, char c);
static size_t	get_word_length(char const *s, char c);

char	**ft_split(char const *s, char c)
{
	size_t	word_quantity;
	size_t	k;
	char	**matrix;

	k = 0;
	i = get_word_quantity(s, c);
	matrix = (char **) ft_calloc(i + 1, sizeof(char *));
	while (*s)
	{
		if (*s != c)
		{
			matrix[k] = ft_substr(s, 0, get_word_length(s, c));
			s++;
			k++;
		}
		while (*s != c && *s)
			s++;
		while (*s == c && *s)
			s++;
	}
	return (matrix);
}

static size_t	get_word_quantity(char const *s, char c)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (*(s + j))
	{
		if (*(s + j) != c)
			i++;
		while (*(s + j) != c && *(s + j))
			j++;
		while (*(s + j) == c && *(s + j))
			j++;
	}
	return (i);
}

static size_t	get_word_length(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] != c && s[i])
		i++;
	return (i);
}
