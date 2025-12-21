/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amary <amary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/20 18:30:26 by amary             #+#    #+#             */
/*   Updated: 2025/12/21 13:47:25 by amary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	fill_stack(t_stack **stack_a_head, char **argv, int i)
{
	int		*tab;
	int		size;
	char	**tmp;
	int		k;
	int		j;

	size = ft_arg_len(argv);
	tab = malloc(size * sizeof(int));
	if (!tab)
		return ;
	i = 0;
	j = 1;
	while (i < size)
	{
		k = 0;
		tmp = ft_split(argv[j++], ' ');
		while (tmp[k])
			tab[i++] = ft_atoi(tmp[k++]);
		my_free(tmp);
	}
	j = size - 1;
	while (j >= 0)
			push_front(stack_a_head, new_node(tab[j--]));
	return (free(tab));
}
