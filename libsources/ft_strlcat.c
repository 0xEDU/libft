/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 20:25:05 by coder             #+#    #+#             */
/*   Updated: 2023/03/16 17:04:30 by edu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	index;
	size_t	len_dst;
	size_t	len_src;

	index = 0;
	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	if (dstsize < len_dst)
		return (len_src + dstsize);
	while (*(src + index) && index + 1 < (dstsize - len_dst))
	{
		*(dst + len_dst + index) = *(src + index);
		index++;
	}
	*(dst + len_dst + index) = '\0';
	return (len_dst + len_src);
}
