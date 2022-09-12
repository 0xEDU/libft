/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etachott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 14:03:37 by etachott          #+#    #+#             */
/*   Updated: 2022/09/11 14:57:44 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*original;
	char	*sub;
	size_t	i;

	i = 0;
	original = (char *) s;
	if (len > ft_strlen(s))
	{
		sub = malloc(1);
		sub[i] = '\0';
		return (sub);
	}
	sub = malloc(sizeof(char) * len + 1);
	while (len--)
		*(sub + i++) = *(original + start++);
	*(sub + i) = '\0';
	return (sub);
}
