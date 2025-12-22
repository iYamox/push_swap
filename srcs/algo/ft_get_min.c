/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_min.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amary <amary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 15:26:09 by amary             #+#    #+#             */
/*   Updated: 2025/12/22 15:53:18 by amary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

int	ft_get_min(t_stack **stack_a_head)
{
	int		i;
	int		min;
	t_stack	*cpy;
	
	i = 0;
	min = 0;
	cpy = *stack_a_head;
	while (cpy)
	{
		if (min > cpy->content)
			min = cpy->content;
		cpy = cpy->next;
	}
	cpy = *stack_a_head;
	while (cpy->content != min)
	{
		cpy = cpy->next;
		i++;
	}
	return (i);
}