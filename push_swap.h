/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amary <amary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 15:07:19 by amary             #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2025/12/13 16:52:37 by amary            ###   ########.fr       */
=======
/*   Updated: 2025/12/15 17:14:17 by amary            ###   ########.fr       */
>>>>>>> 4542df2 (push_swap)
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

// # include "ft_printf.h"
# include <stdlib.h>
# include <stddef.h>
# include <stdio.h>

typedef struct s_stack
{
	int				content;
	struct s_stack	*next;
}					t_stack;

<<<<<<< HEAD
void	sa(t_stack *stack_head);
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
=======
void	push_front(t_stack **head, t_stack *new_node);
void	sa(t_stack **stack_a_head);
void	sb(t_stack **stack_b_head);
void	ss(t_stack **stack_a_head, t_stack **stack_b_head);
void	pa(t_stack **stack_b_head, t_stack **stack_a_head);
void	pb(t_stack **stack_b_head, t_stack **stack_a_head);
void	ra(t_stack **stack_a_head);
void	rb(void);
void	rr(void);
void	rra(void);
void	rrb(void);
void	rrr(void);
>>>>>>> 4542df2 (push_swap)

#endif