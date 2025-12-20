/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_doublon.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/20 12:30:52 by amary             #+#    #+#             */
/*   Updated: 2025/12/20 23:27:56 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

int	is_doublon(int *tab, int size)
{
	int	i;
	int	j;

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

int		ft_check_doublon(char **argv)
{
	char	**tmp;
	int		*tab;
	int		size;
	int		i;
	int		j;
	int		k;

	size = ft_arg_len(argv);
	tab = malloc(size * sizeof(int));
	if (!tab)
		return (0);
	i = 0;
	j = 0;
	while (i <= size)
	{
		k = 0;
		tmp = ft_split(argv[j++], ' ');
		while (tmp[k])
			tab[i++] = ft_atoi(tmp[k++]);
		free(tmp);
	}
	if (is_doublon(tab, size) == 0)
		return (0);
	else
		return (1);
}
