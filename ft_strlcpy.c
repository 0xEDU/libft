/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 20:09:35 by coder             #+#    #+#             */
/*   Updated: 2022/08/31 21:27:40 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_len(const char *str);

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	nonull;
	size_t	ret;

	nonull = size - 1;
	ret = ft_len(src);
	if (size)
	{
		while (nonull-- && *src)
		{
			*dst = (char) *src;
			dst++;
			src++;
		}
		*dst = '\0';
	}
	return (ret);
}

static size_t	ft_len(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
