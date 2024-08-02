/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wabolles <wabolles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 09:00:37 by wabolles          #+#    #+#             */
/*   Updated: 2024/08/02 11:42:19 by wabolles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H

# include <pthread.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <stdio.h>

enum	e_exits
{
	SUCCESS = 0,
	FAILURE = -1
};

typedef struct s_philo
{
	int		n_philo;
	int		n_forks;
	int		t_to_die;
	int		t_to_eat;
	int		t_to_sleep;
	int		optional;
}	t_philo;


int			parse_args(int ac, char *av[], t_philo *data);
int			print_err(char *error);
int			usage_display(void);
int			ft_atoi(char *str);

#endif