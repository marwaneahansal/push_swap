/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_helpers.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahansal <mahansal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 12:58:14 by mahansal          #+#    #+#             */
/*   Updated: 2023/02/11 20:10:32 by mahansal         ###   ########.fr       */
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

int get_max_index(t_node *stack)
{
  int   max;
  int   i;
  int   j;
  t_node *tmp;

  tmp = stack;
  max = tmp->value;
  i = 0;
  j = 0;
  while (tmp)
  {
    if (tmp->value > max)
    {
      max = tmp->value;
      j = i;
    }
    i++;
    tmp = tmp->next;
  }
  return (j);
}

void  push_a_b(t_node **stack_a, t_node **stack_b, int division)
{
  int size;
  int chunk_size;
  int chunk_end;
  int i;

  size = ft_lstsize(*stack_a);
  chunk_size = size / division;
  chunk_end = chunk_size;
  int half = chunk_size / 2;
  while (ft_lstsize(*stack_a))
  {
    i = 0;
    while (ft_lstsize(*stack_a) && i < chunk_size)
    {
      if ((*stack_a)->index <= chunk_end)
      {
        if ((*stack_a)->index <= chunk_end - half)
        {
          pb(stack_a, stack_b, 1);
          rb(stack_b, 1);
        }
        else
          pb(stack_a, stack_b, 1);
        i++;
      }
      else
        ra(stack_a, 1);
    }
    chunk_end += chunk_size;
  }
}

int get_curr_position(t_node *stack_b, int index)
{
  t_node *tmp;
  int i;

  i = 0;
  tmp = stack_b;
  while (tmp)
  {
    if (tmp->index == index)
      return (i);
    tmp = tmp->next;
    i++;
  }
  return (-1);
}

void  push_elem(t_node **stack_a, t_node **stack_b, int elem)
{
  if (elem < ft_lstsize(*stack_b) / 2)
  {
    while (elem-- > 0)
      rb(stack_b, 1);
  }
  else
  {
    while (elem++ < ft_lstsize(*stack_b))
      rrb(stack_b, 1);
  }
  pa(stack_a, stack_b, 1);
}