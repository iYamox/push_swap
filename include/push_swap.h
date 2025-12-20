/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amary <amary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 15:07:19 by amary             #+#    #+#             */
/*   Updated: 2025/12/20 18:32:53 by amary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

// # include "ft_printf.h"
# include <unistd.h>
# include <stdlib.h>
# include <stddef.h>
# include <stdio.h>
#include <limits.h>

typedef struct s_stack
{
	int				content;
	struct s_stack	*next;
}					t_stack;

void	push_front(t_stack **head, t_stack *new_node);
void	sa(t_stack **stack_a_head);
void	sb(t_stack **stack_b_head);
void	ss(t_stack **stack_a_head, t_stack **stack_b_head);
void	pa(t_stack **stack_b_head, t_stack **stack_a_head);
void	pb(t_stack **stack_b_head, t_stack **stack_a_head);
void	ra(t_stack **stack_a_head);
void	rb(t_stack **stack_b_head);
void	rr(t_stack **stack_a_head, t_stack **stack_b_head);
void	rra(t_stack **stack_a_head);
void	rrb(t_stack **stack_b_head);
void	rrr(t_stack **stack_b_head, t_stack **stack_a_head);
int		ft_arg_len(char **argv);
int		ft_arg_count(char *str, char c);
char	**ft_split(char const *str, char c);
void	my_free(char **tmp);
int		check_args(char **argv);
int		verif_format(char **str);
int		ft_isdigit(char **argv);
int		ft_check_limits(char **arg);
int		ft_check_doublon(char **arg);
int		ft_atoi(char *str);
int		ft_strlen(char *str);
void	fill_stack(t_stack **stack_a_head, char **argv);

#endif