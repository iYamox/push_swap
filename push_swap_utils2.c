/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amary <amary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 15:10:49 by amary             #+#    #+#             */
/*   Updated: 2025/12/15 19:13:16 by amary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_stack **stack_a_head)
{
	t_stack	*tmp;
	t_stack	*cpy;

	if (!stack_a_head || (*stack_a_head)->next == NULL || !*stack_a_head)
		return ;
	tmp = *stack_a_head;
	*stack_a_head = (*stack_a_head)->next;
	tmp->next = NULL;
	cpy = *stack_a_head;
	while (cpy->next != NULL)
		cpy = cpy->next;
	cpy->next = tmp;
}

void	rb(t_stack **stack_b_head)
{
	t_stack	*tmp;
	t_stack	*cpy;

	if (!stack_b_head || !*stack_b_head || (*stack_b_head)->next == NULL)
		return ;
	tmp = *stack_b_head;
	*stack_b_head = (*stack_b_head)->next;
	tmp->next = NULL;
	cpy = *stack_b_head;
	while (cpy->next != NULL)
		cpy = cpy->next;
	cpy->next = tmp;
}

void	rr(t_stack **stack_a_head, t_stack **stack_b_head)
{
	ra(stack_a_head);
	rb(stack_b_head);
}

void	rra(t_stack **stack_a_head)
{	
	t_stack	*cpy;
	t_stack	*tmp;

	if (!stack_a_head || !*stack_a_head || (*stack_a_head)->next == NULL)
		return ;
	cpy = *stack_a_head;
	while (cpy->next->next != NULL)
		cpy = cpy->next;
	tmp = cpy;
	cpy = cpy->next;
	tmp->next = NULL;
	push_front(stack_a_head, cpy);
}

void	rrb(t_stack **stack_b_head)
{	
	t_stack	*tmp;
	t_stack	*cpy;

	if (!stack_b_head || !*stack_b_head || (*stack_b_head)->next == NULL)
		return ;
	cpy = *stack_b_head;

	while (cpy->next->next != NULL)
		cpy = cpy->next;
	tmp = cpy;
	cpy = cpy->next;
	tmp->next = NULL;
	push_front(stack_b_head, cpy);
}
