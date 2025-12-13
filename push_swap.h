/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amary <amary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 15:07:19 by amary             #+#    #+#             */
/*   Updated: 2025/12/13 13:14:12 by amary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H


#include "ft_printf.h"
#include <stdlib.h>

typedef struct s_stack
{
	int				content;
	struct s_stack	*next;
	struct s_stack	*prev;
}	t_stack;

void	sa();
void	sb();
void	ss();
void	pa();
void	pb();
void	ra();
void	rb();
void	rr();
void	rra();
void	rrb();
void	rrr();

#endif