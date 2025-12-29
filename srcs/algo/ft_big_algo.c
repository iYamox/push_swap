/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_big_algo.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amary <amary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 15:19:49 by amary             #+#    #+#             */
/*   Updated: 2025/12/29 14:14:19 by amary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	ft_big_algo(t_stack **stack_a_head, t_stack **stack_b_head)
{
	t_stack	*cpy;
	
	if (!stack_a_head || !*stack_a_head)
		return ;

	cpy = *stack_a_head;
	while (cpy)
	{
		set_min_in_b(stack_b_head, stack_a_head);
		cpy = cpy->next;
	}
	return ;
}
