/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_fn.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahansal <mahansal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 13:29:38 by mahansal          #+#    #+#             */
/*   Updated: 2023/01/26 18:12:01 by mahansal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int get_min_index(t_node *stack)
{
  int   min;
  int   i;
  int   j;
  t_node *tmp;

  tmp = stack;
  min = tmp->value;
  i = 0;
  j = 0;
  while (tmp)
  {
    if (tmp->value < min)
    {
      min = tmp->value;
      j = i;
    }
    i++;
    tmp = tmp->next;
  }
  return (j);
}

void  sort_two(t_node **stack)
{
  if ((*stack)->value > (*stack)->next->value)
    sa(stack, 1);
}

void  sort_three(t_node **stack)
{
  if ((*stack)->value < (*stack)->next->value 
      && (*stack)->value < (*stack)->next->next->value)
  {
    rra(stack, 1);
    sa(stack, 1);
  }
  else if ((*stack)->value > (*stack)->next->value
          && (*stack)->value > (*stack)->next->next->value)
  {
    ra(stack, 1);
    if ((*stack)->value > (*stack)->next->value)
      sa(stack, 1);
  }
  else if ((*stack)->value > (*stack)->next->value)
    sa(stack, 1);
  else if ((*stack)->value > (*stack)->next->next->value)
    rra(stack, 1);
}

void  sort_four(t_node **stack_a, t_node **stack_b)
{
  int   min_index;

  min_index = get_min_index(*stack_a);
  printf("min value index: %d\n", min_index);
  if (min_index == 1)
    sa(stack_a, 1);
  else if (min_index == 2)
  {
    rra(stack_a, 1);
    rra(stack_a, 1);
  }
  else if (min_index == 3)
    rra(stack_a, 1);
  pb(stack_a, stack_b, 1);
  print_list(*stack_a);
  sort_three(stack_a);
  print_list(*stack_a);
  pa(stack_a, stack_b, 1);
  (void) stack_b;
}