/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wabolles <wabolles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 13:29:27 by wabolles          #+#    #+#             */
/*   Updated: 2024/08/02 10:22:31 by wabolles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	exit_err(char *error)
{
	write(2, "\n", 1);
	while (*error)
		write(2, error++, 1);
	write(2, "\n", 1);
	exit(1);
}

int	ft_atoi(char *str)
{
	int			sign;
	long		number;
	int			index;

	index = 0;
	while (str[index] && (str[index] >= 9 && str[index] <= 13))
		index++;
	sign = 1;
	if (str[index] == '-' || str[index] == '+')
		if (str[index++] == '-')
			sign = -sign;
	number = 0;
	while (str[index] >= '0' && str[index] <= '9')
	{
		number = (number * 10) + (str[index] - 48);
		if (number > 2147483648 && sign == -1)
			exit_err("\033[31mError[2]: digit < MIN_INT\033[0m\n");
		else if (number > 2147483647 && sign == 1)
			exit_err("\033[31mError[2]: digit > MAX_INT\033[0m\n");
		index++;
	}
	return (number * sign);
}
