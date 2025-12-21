/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amary <amary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/20 12:01:39 by amary             #+#    #+#             */
/*   Updated: 2025/12/21 11:28:10 by amary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

int	main(int argc, char **argv)
{
	// t_stack	*stack_a;
	// t_stack	*stack_b;

	if (argc == 1)
		return (0);
	// stack_a = NULL;
	// stack_b = NULL;
	if (check_args(argv) == 0)
		return (write(2, "Error\n", 6), 1);
	else
		return (write(1, "OK\n", 3) , 0);
	// fill_stack(&stack_a, argv);
	return (0);
}
