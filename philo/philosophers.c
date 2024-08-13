/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosophers.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wabolles <wabolles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 09:01:51 by wabolles          #+#    #+#             */
/*   Updated: 2024/08/13 06:55:58 by wabolles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	main(int ac, char *av[])
{
	t_philo		data;

	if (ac < 5 || ac > 6)
		return (usage_display());
	if (parse_args(ac, av, &data))
		return (FAILURE);
	printf("%d\n %d\n %d\n %d\n %d\n %d \n",data.n_philo, data.n_forks
									, data.t_to_die, data.t_to_eat, data.t_to_sleep,
									 data.optional);
	return (SUCCESS);
}
