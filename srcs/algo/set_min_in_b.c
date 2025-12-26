/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_min_in_b.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amary <amary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 13:57:23 by amary             #+#    #+#             */
/*   Updated: 2025/12/26 15:04:13 by amary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	set_min_in_b(t_stack **stack_b_head, t_stack **stack_a)
{
	t_stack	*cpy;
	int		i;
	int		min;

	cpy = *stack_a;
	min = cpy->content;
	while (cpy)
	{
		if (min > cpy->content)
			min = cpy->content;
		cpy = cpy->next;
	}
	cpy = *stack_a;
	i = 0;
	while (cpy)
	{
		if (cpy->content == min)
		{
			rotate_and_push(stack_b_head, stack_a, i);
			return ;
		}
		i++;
		cpy = cpy->next;
	}
}
