/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 16:47:16 by coder             #+#    #+#             */
/*   Updated: 2022/08/31 22:19:51 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t			i;
	unsigned char	*p;

	i = 0;
	if (count * size > SIZE_MAX)
		return (NULL);
	if (count == 0 || size == 0)
		return (malloc(0));
	p = malloc(count * size);
	while (i < size * count)
		p[i++] = '\0';
	return (p);
}
