/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahansal <mahansal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 18:04:46 by mahansal          #+#    #+#             */
/*   Updated: 2023/02/10 00:08:37 by mahansal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H

# define PUSH_SWAP_H

typedef struct s_node
{
  int value;
  int index;
  struct s_node *next;
} t_node;

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <limits.h>
#include "utils.h"

void  sa(t_node **a, int write_op);
void  sb(t_node **b, int write_op);
void  ss(t_node **a, t_node **b);
void  pa(t_node **a, t_node **b, int write_op);
void  pb(t_node **a, t_node **b, int write_op);
void  ra(t_node **a, int write_op);
void  rb(t_node **b, int write_op);
void  rr(t_node **a, t_node **b);
void  rra(t_node **a, int write_op);
void  rrb(t_node **b, int write_op);
void  rrr(t_node **a, t_node **b);

int     check_numbers(char **numbers);
int     check_duplicates(t_node *stack_a);
int     check_maxmin_numbers(char **numbers);
int     check_is_sorted(t_node *stack);

t_node  *fill_stack(char **numbers);
void    assign_indexs(t_node *stack_a);
void    init(char **numbers, t_node **stack_a);

void  start_sort(t_node **stack_a, t_node **stack_b);

char	*ft_strjoin(char *s1, char *s2);
char	*ft_strdup(char *s1);

int   get_min_index(t_node *stack);
int   get_max_index(t_node *stack);
void  push_a_b(t_node **stack_a, t_node **stack_b);
void  push_elem(t_node **stack_a, t_node **stack_b, int elem);
int   get_curr_position(t_node *stack_b, int index);

void  sort_two(t_node **stack_a);
void  sort_three(t_node **stack_a);
void  sort_four(t_node **stack_a, t_node **stack_b);
void  sort_five(t_node **stack_a, t_node **stack_b);
void  sort_big(t_node **stack_a, t_node **stack_b); 


void  print_list(t_node *head);

#endif
