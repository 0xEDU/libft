/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 01:18:56 by coder             #+#    #+#             */
/*   Updated: 2023/03/16 17:48:16 by edu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = ft_strlen(s);
	while (len)
	{
		if (s[len] == (char) c)
			return ((char *)s + len);
		len--;
	}
	if (s[len] == (char) c)
		return ((char *)s + len);
	return (0);
}
