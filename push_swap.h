/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahansal <mahansal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 18:04:46 by mahansal          #+#    #+#             */
/*   Updated: 2023/01/26 18:11:02 by mahansal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H

# define PUSH_SWAP_H

typedef struct s_node
{
  int value;
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

int     check_numbers(int argc, char **argv, char **numbers);
int     check_duplicates(int argc, char **argv, char **numbers);
int     check_maxmin_numbers(int argc, char **argv, char **numbers);
int     check_is_sorted(t_node *stack);

t_node  *fill_stack(int argc, char **argv, char **numbers);
void    init(int argc, char **argv, char **numbers, t_node **stack_a);

void  start_sort(t_node **stack_a, t_node **stack_b);

void  sort_two(t_node **stack);
void  sort_three(t_node **stack);
void  sort_four(t_node **stack_a, t_node **stack_b);


void  print_list(t_node *head);

#endif
