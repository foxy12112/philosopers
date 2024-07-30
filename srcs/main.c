/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldick <ldick@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 10:21:27 by ldick             #+#    #+#             */
/*   Updated: 2024/07/30 12:00:44 by ldick            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

// int	philo_five(int argc, char *argv[])
// {
// 	t_philo *philo;
	
// 	philo = init(argc, argv);
	
// }

int	main(int argc, char *argv[])
{
	t_table		table;

	if (argc == 5 || argc == 6)
	{
		parse(&table, argv);
		init(&table);
		// start(&table);	//TODO
		// clean(&table);	//TODO
	}
	else
		error_exit("Wrong input\n");
	// close_all;	//TODO
	// free_all;	//TODO
}
