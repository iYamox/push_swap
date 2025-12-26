/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_and_push.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amary <amary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 14:55:49 by amary             #+#    #+#             */
/*   Updated: 2025/12/26 15:09:00 by amary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	rotate_and_push(t_stack **stack_b, t_stack **stack_a, int index)
{
	while (index > 0)
	{
		ra(stack_a);
		index--;
	}
	pb(stack_b, stack_a);
	return ;
}
