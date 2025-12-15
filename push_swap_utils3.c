/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils3.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amary <amary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 19:37:44 by amary             #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2025/12/12 15:41:32 by amary            ###   ########.fr       */
=======
/*   Updated: 2025/12/15 16:45:33 by amary            ###   ########.fr       */
>>>>>>> 4542df2 (push_swap)
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrr()
{
	
}

void push_front(t_stack **head, t_stack *new_node)
{
	if (!new_node || !head)
		return;
	new_node->next = *head;
	*head = new_node;
}
