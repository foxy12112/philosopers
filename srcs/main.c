/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldick <ldick@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 10:21:27 by ldick             #+#    #+#             */
/*   Updated: 2024/07/24 16:32:35 by ldick            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philosophers.h"

int	philo_five(char *argv[])
{
	t_philo *philo;
	
	philo = init_five(argv);
	
}

int	main(int argc, char *argv[])
{
	if (argc == 5)
	{
		philo_five(argv);
	}
	if (argc == 6)
	{
		philo_six
	}
	close_all;
	free_all;
}
