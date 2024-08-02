/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wabolles <wabolles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 13:29:27 by wabolles          #+#    #+#             */
/*   Updated: 2024/08/02 13:06:26 by wabolles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

long	ft_atoi(char *str)
{
	int			sign;
	long		number;
	int			index;

	index = 0;
	while (str[index] && (str[index] >= 9 && str[index] <= 13))
		index++;
	sign = 1;
	while (str[index] == '-' || str[index] == '+')
		if (str[index++] == '-')
			sign = -sign;
	number = 0;
	while (str[index] >= '0' && str[index] <= '9')
	{
		number = (number * 10) + (str[index] - 48);
		index++;
	}
	return (number * sign);
}
