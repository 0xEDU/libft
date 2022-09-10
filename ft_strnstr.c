/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 21:30:25 by coder             #+#    #+#             */
/*   Updated: 2022/09/08 21:09:23 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//atic char	*reverse_len(const char *haystack, const char *needle, size_t len);
//atic char	*returns(size_t len, char *pos, const char *hay, const char *n);

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	jj;
	char	*h;

	jj = len;
	h = (char *) haystack;
	if (ft_strchr(haystack, needle[0]))
		return (h);
	return (NULL);
}
