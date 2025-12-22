/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo_is_3.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amary <amary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 15:17:08 by amary             #+#    #+#             */
/*   Updated: 2025/12/22 17:56:56 by amary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void ft_algo_is_3(t_stack **stack_a_head, t_stack **stack_b_head)
{
	int repeat;

	repeat = ft_get_min(stack_a_head);
	while (repeat > 0)
	{
		ra(stack_a_head);
		repeat--;
	}
	pb(stack_a_head, stack_b_head);
	if ((*stack_a_head)->content > (*stack_a_head)->next->content)
		sa(stack_a_head);
	pa(stack_b_head, stack_a_head);
	return;
}