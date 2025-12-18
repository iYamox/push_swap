/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils3.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amary <amary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 19:37:44 by amary             #+#    #+#             */
/*   Updated: 2025/12/15 19:21:40 by amary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrr(t_stack **stack_b_head, t_stack **stack_a_head)
{
	rra(stack_a_head);
	rrb(stack_b_head);
	write(1, "rrr\n", 4);
}

void	push_front(t_stack **head, t_stack *new_node)
{
	if (!new_node || !head)
		return ;
	new_node->next = *head;
	*head = new_node;
}

int is_str(char *str)
{
	int i;

	i = 0;
	while (str[i] && (str[i] == ' ' || str[i] == '\t'))
		i++;
	
}
