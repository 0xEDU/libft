/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 18:04:44 by coder             #+#    #+#             */
/*   Updated: 2023/03/16 16:11:20 by edu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strcpy(char *dst, const char *src)
{
	while (*src)
	{
		*dst = *src;
		src++;
		dst++;
	}
	*dst = '\0';
	return (dst);
}

char	*ft_strdup(const char *s1)
{
	char	*k;

	k = (char *) malloc(ft_strlen(s1) + 1);
	if (k != NULL)
		ft_strcpy(k, s1);
	return (k);
}

