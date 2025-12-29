/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_big_algo.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amary <amary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 15:19:49 by amary             #+#    #+#             */
/*   Updated: 2025/12/29 16:08:04 by amary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	ft_big_algo(t_stack **stack_a_head, t_stack **stack_b_head)
{
	if (!stack_a_head || !*stack_a_head)
		return ;
	while (*stack_a_head)
		set_min_in_b(stack_b_head, stack_a_head);
	while (*stack_b_head)
		pa(stack_b_head, stack_a_head);
	return ;
}
