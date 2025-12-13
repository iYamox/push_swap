/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amary <amary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 15:10:53 by amary             #+#    #+#             */
/*   Updated: 2025/12/13 17:07:35 by amary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
}

void	pa()
{
	
}

void	pb()
{

}
