/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils3.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amary <amary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 19:37:44 by amary             #+#    #+#             */
/*   Updated: 2025/12/19 13:34:49 by amary            ###   ########.fr       */
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

int	ft_arg_len(int argc, char **argv)
{
	int	j;
	int count;

	j = 0;
	count = 0;
	while (++j < argc)
		count += ft_arg_count(argv[j], ' ');
	return (count);
}

int	ft_arg_count(char *str, char c)
{
	int	i;
	int	k;
	
	k = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		if (!str[i])
			break  ;
		while (str[i] && str[i] != c)
			i++;
		k++;
	}
	return (k);
}
