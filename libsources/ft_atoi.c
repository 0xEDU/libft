/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 19:54:52 by coder             #+#    #+#             */
/*   Updated: 2023/03/16 11:39:23 by edu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	is_negative;
	int	result;

	is_negative = 1;
	result = 0;
	while (*str == ' ' || *str == '\t' || *str == '\r'
		|| *str == '\n' || *str == '\f' || *str == '\v')
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			is_negative = -1;
		str++;
	}
	while ('0' <= *str && *str <= '9')
	{
		result = (*str - '0') + (result * 10);
		str++;
	}
	return (result * is_negative);
}
