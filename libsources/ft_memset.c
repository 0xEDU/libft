/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 19:03:49 by coder             #+#    #+#             */
/*   Updated: 2023/03/16 15:36:18 by edu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned int	index;
	unsigned char	*ptr;

	ptr = s;
	index = 0;
	while (index < n)
	{
		ptr[index] = c;
		index++;
	}
	return (s);
}
