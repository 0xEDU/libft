/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 14:56:08 by coder             #+#    #+#             */
/*   Updated: 2023/03/16 15:29:27 by edu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*dst_copy;
	const char	*src_copy;

	dst_copy = (char *)dst;
	src_copy = (const char *)src;
	if (dst > src)
		while (len--)
			*(dst_copy + len) = *(src_copy + len);
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
