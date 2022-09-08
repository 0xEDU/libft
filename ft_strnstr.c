/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 21:30:25 by coder             #+#    #+#             */
/*   Updated: 2022/08/31 20:04:33 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*returns(size_t len, char *pos, const char *hay, const char *n);

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	hit;
	char	*pos;

	hit = 0;
	pos = NULL;
	if (*needle == '\0')
		return ((char *) haystack);
	while (len--)
	{
		if (*haystack == '\0')
			break ;
		if (*haystack == *needle)
		{
			hit = 1;
			pos = (char *) haystack;
			break ;
		}
		haystack++;
	}
	if (hit)
		return (returns(len, pos, haystack, needle));
	else
		return (NULL);
}

static char	*returns(size_t len, char *pos, const char *hay, const char *n)
{
	while (*n == *hay && len--)
	{
		n++;
		hay++;
	}
	if (*n)
		return (NULL);
	else
		return (pos);
}
