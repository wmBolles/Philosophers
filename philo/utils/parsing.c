/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wabolles <wabolles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 09:11:25 by wabolles          #+#    #+#             */
/*   Updated: 2024/08/02 16:15:47 by wabolles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

static int	is_valid(char *arg)
{
	int		index;

	index = 0;
	if (*arg == '\0')
		return (err("\033[31mError[6]: empty argument !\n\033[0m"));
	while (arg[index] == '-' || arg[index] == '+')
		index++;
	if (arg[index] == '\0')
		return (err("\033[31mError[5]: invalid number !\033[0m\n"));
	if (!(arg[index] >= '0' && arg[index] <= '9'))
		return (err("\033[31mError[4]: argument is not valid !\033[0m\n"));
	while (arg[index])
	{
		if (!(arg[index] >= '0' && arg[index] <= '9'))
			return (err("\033[31mError[4]: argument is not valid !\033[0m\n"));
		index++;
	}
	return (SUCCESS);
}

static int	parse_number(char *n)
{
	long		number;

	number = ft_atoi(n);
	if (number < -2147483648)
		return (err("\033[31mError[2]: digit < MIN_INT\033[0m\n"));
	else if (number > 2147483647)
		return (err("\033[31mError[2]: digit > MAX_INT\033[0m\n"));
	if (number <= 0)
		return (err("\033[31mError[7]: number <= 0\033[0m\n"));
	return (SUCCESS);
}

void	init_numbers(int ac, char *av[], t_philo *data)
{
	data->n_philo = ft_atoi(av[1]);
	data->n_forks = data->n_philo;
	data->t_to_die = ft_atoi(av[2]);
	data->t_to_eat = ft_atoi(av[3]);
	data->t_to_sleep = ft_atoi(av[4]);
	if (ac == 6)
		data->optional = ft_atoi(av[5]);
}

int	parse_args(int ac, char *av[], t_philo *data)
{
	int		index;

	index = 1;
	while (index < ac)
	{
		if (is_valid(av[index]))
			return (FAILURE);
		if (parse_number(av[index]))
			return (FAILURE);
		index++;
	}
	init_numbers(ac, av, data);
	return (SUCCESS);
}
