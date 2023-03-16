/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_hex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etachott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 13:42:36 by etachott          #+#    #+#             */
/*   Updated: 2023/03/16 11:44:26 by edu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi_hex(const char *str)
{
	int		index;
	int		is_negative;
	int		result;

	index = 0;
	is_negative = 1;
	result = 0;
	while (str[index] == ' ' || str[index] == '\t' || str[index] == '\n'
		|| str[index] == '\v' || str[index] == '\f' || str[index] == '\r')
		index++;
	while (str[index])
	{
		if (str[index] >= '0' && str[index] <= '9')
			result = result * 16 + str[index] - '0';
		else if (str[index] >= 'A' && str[index] <= 'F')
			result = result * 16 + str[index] - 'A' + 10;
		else if (str[index] >= 'a' && str[index] <= 'f')
			result = result * 16 + str[index] - 'a' + 10;
		else
			return (result * is_negative);
		index++;
	}
	return (result * is_negative);
}
