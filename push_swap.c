/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amary <amary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 15:10:46 by amary             #+#    #+#             */
/*   Updated: 2025/12/29 16:07:34 by amary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

void	ft_print_list(t_stack *stack_a)
{
	while (stack_a)
	{
		printf("%d", stack_a->content);
		if (stack_a->next != NULL)
			printf("-> ");
		stack_a = stack_a->next;
	}
}

void	ft_push_swap(t_stack **stack_a, t_stack **stack_b, int stack_a_size)
{
	printf(" (printf dans push_swap.c)\nAvant :");
	ft_print_list(*stack_a);
	if (stack_a_size == 2)
		sa(stack_a);
	else if (stack_a_size == 3)
		ft_algo_is_3(stack_a);
	else if (stack_a_size <= 5)
		ft_algo_is_5(stack_a, stack_b);
	else if (stack_a_size > 5)
		ft_big_algo(stack_a, stack_b);
	printf("\nApres :");
	ft_print_list(*stack_a);
	return ;
}
