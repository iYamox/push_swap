/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_doublon.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amary <amary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/20 12:30:52 by amary             #+#    #+#             */
/*   Updated: 2025/12/20 22:18:20 by amary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

int	ft_check_doublon(char **arg)
{
	int	*tab;
	int	size;
	int	i;
	int	j;

	size = ft_arg_len(arg);
	tab = malloc(size * sizeof(int));
	if (!tab)
		return (0);
	i = 0;
	j = 0;
	while (j <= size)
		tab[i++] = ft_atoi(arg[j++]);
	i = -1;
	while (++i <= size)
	{
		j = 0;
		while (j < size)
		{
			if (tab[i] == tab[j] && (i != j))
				return (free(tab), 0);
			j++;
		}
	}
	return (free(tab), 1);
}
