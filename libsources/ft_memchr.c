/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 00:22:39 by coder             #+#    #+#             */
/*   Updated: 2023/03/16 14:53:54 by edu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned	char	*ptr = s;

	c = (unsigned char) c;
	while (n--)
	{
		if (*ptr == c)
			return (void *)ptr;
		ptr++;
	}
	return (NULL);
}
