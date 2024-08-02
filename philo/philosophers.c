/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosophers.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wabolles <wabolles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 09:01:51 by wabolles          #+#    #+#             */
/*   Updated: 2024/08/02 10:57:11 by wabolles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

#define unused __attribute__ ((unused))

int main(int ac, char *av[])
{
	t_philo		data;
	
	if (ac < 5 || ac > 6)
		usage_display();
	parse_args(ac, av, &data);
	printf("%d\n %d\n %d\n %d\n %d\n %d \n",data.n_philo, data.n_forks
									, data.t_to_die, data.t_to_eat, data.t_to_sleep,
									 data.optional);
	return (SUCCESS);
}
