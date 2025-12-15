/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amary <amary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 15:10:53 by amary             #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2025/12/13 17:07:35 by amary            ###   ########.fr       */
=======
/*   Updated: 2025/12/15 17:11:13 by amary            ###   ########.fr       */
>>>>>>> 4542df2 (push_swap)
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

<<<<<<< HEAD
void	sa(int *tab_a, int size)
{
	int	tmp;

	if (size < 2)
		return ;
	tmp = tab_a[1];
	tab_a[1] = tab_a[0];
	tab_a[0] = tmp;
	write(1, "sa\n", 3);
}

void	sb(int *tab_b, int size)
{
	int	tmp;

	if (size < 2)
		return ;
	tmp = tab_b[1];
	tab_b[1] = tab_b[0];
	tab_b[0] = tmp;
	write(1, "sb\n", 3);
}

void	ss(int *tab_a, int *tab_b, int size_a, int size_b)
{
	sa(tab_a, size_a);
	sb(tab_b, size_b);
	write(1, "ss\n", 3);
=======
void	sa(t_stack **stack_a_head)
{
	t_stack	*tmp;

	if (!stack_a_head || !*stack_a_head || (*stack_a_head)->next == NULL)
		return ;
	tmp = (*stack_a_head)->next;
	(*stack_a_head)->next = tmp->next;
	tmp->next = *stack_a_head;
	*stack_a_head = tmp;
}

void	sb(t_stack **stack_b_head)
{
	t_stack	*tmp;

	if (!stack_b_head || !*stack_b_head || (*stack_b_head)->next == NULL)
		return ;
	tmp = (*stack_b_head)->next;
	(*stack_b_head)->next = tmp->next;
	tmp->next = *stack_b_head;
	*stack_b_head = tmp;
}

void	ss(t_stack **stack_a_head, t_stack **stack_b_head)
{
	sa(stack_a_head);
	sb(stack_b_head);
>>>>>>> 4542df2 (push_swap)
}

void	pa(t_stack **stack_b_head, t_stack **stack_a_head)
{
	t_stack	*tmp;

	if (!stack_b_head || !stack_a_head || !*stack_b_head)
		return ;
	tmp = *stack_b_head;
	*stack_b_head = (*stack_b_head)->next;
	push_front(stack_a_head, tmp);
}

void	pb(t_stack **stack_a_head, t_stack **stack_b_head)
{
	t_stack	*tmp;

	if (!stack_b_head || !stack_a_head || !*stack_a_head)
		return ;
	tmp = *stack_a_head;
	*stack_a_head = (*stack_a_head)->next;
	push_front(stack_b_head, tmp);
}
