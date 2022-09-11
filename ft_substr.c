/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etachott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 14:03:37 by etachott          #+#    #+#             */
/*   Updated: 2022/09/10 15:22:06 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*original;
	char	*sub;
	size_t	i;

	original = (char *) s;
	if (len > ft_strlen(s))
	{
		//sub = malloc(1);
		//*sub = '\0';
		return (original);
	}
	i = 0;
	sub = malloc((sizeof(char) * len) + 1);
	while (len--)
		*(sub + i++) = *(original + start++);
	*(sub + i) = '\0';
	return (sub);
}
