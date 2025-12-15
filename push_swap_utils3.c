/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils3.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amary <amary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 19:37:44 by amary             #+#    #+#             */
/*   Updated: 2025/12/15 18:13:06 by amary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrr(void)
{
	return ;
}

void	push_front(t_stack **head, t_stack *new_node)
{
	if (!new_node || !head)
		return ;
	new_node->next = *head;
	*head = new_node;
}
