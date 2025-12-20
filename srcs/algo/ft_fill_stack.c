/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amary <amary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/20 18:30:26 by amary             #+#    #+#             */
/*   Updated: 2025/12/20 19:02:33 by amary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	fill_stack(t_stack **stack_a_head, char **argv)
{
	int	*tab;
	int	size;
	int	i;
	int	j;

	size = ft_arg_len(argv);
	tab = malloc(size * sizeof(int));
	if (!tab)
		return (0);
	i = 0;
	j = 0;
	while (j < size)
		tab[i++] = ft_atoi(argv[j++]);
	j = size;
	while (j > size)
		push_front(stack_a_head, new_node(tab[j--]));
	return ;
}
