/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   usage_display.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wabolles <wabolles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 08:32:56 by wabolles          #+#    #+#             */
/*   Updated: 2024/08/08 14:32:27 by wabolles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

static void	ft_putstr(char *s)
{
	while (*s)
		write(2, s++, 1);
}

int	err(char *error)
{
	write(2, "\n", 1);
	while (*error)
		write(2, error++, 1);
	write(2, "\n", 1);
	return (FAILURE);
}

int	usage_display(void)
{
	ft_putstr("\033[31m\n");
	ft_putstr("Please enter 5 arguments after ./philo\n");
	ft_putstr("\033[33m\n");
	ft_putstr("number_of_philosophers\n");
	ft_putstr("time_to_eat\n");
	ft_putstr("time_to_die\n");
	ft_putstr("time_to_sleep\n");
	ft_putstr("[number_of_times_each_philosopher_must_eat]\n");
	ft_putstr("\033[0m\n");
	return (FAILURE);
}
