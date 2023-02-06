/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_fn.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahansal <mahansal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 13:29:38 by mahansal          #+#    #+#             */
/*   Updated: 2023/02/06 16:57:38 by mahansal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void  sort_two(t_node **stack_a)
{
  if ((*stack_a)->value > (*stack_a)->next->value)
    sa(stack_a, 1);
}

void  sort_three(t_node **stack_a)
{
  int   max_index;

  max_index = get_max_index(*stack_a);
  if (max_index == 0)
    ra(stack_a, 1);
  else if (max_index == 1)
    rra(stack_a, 1);
  if ((*stack_a)->value > (*stack_a)->next->value)
    sa(stack_a, 1);
}

void  sort_four(t_node **stack_a, t_node **stack_b)
{
  int   min_index;

  min_index = get_min_index(*stack_a);
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
  if (!check_is_sorted(*stack_a))
    sort_three(stack_a);
  pa(stack_a, stack_b, 1);
}

void  sort_five(t_node **stack_a, t_node **stack_b)
{
  int  min_index;

  min_index = get_min_index(*stack_a);
  if (min_index == 1)
    sa(stack_a, 1);
  else if (min_index == 2)
  {
    ra(stack_a, 1);
    ra(stack_a, 1);
  }
  else if (min_index == 3)
  {
    rra(stack_a, 1);
    rra(stack_a, 1);
  }
  else if (min_index == 4)
    rra(stack_a, 1);
  pb(stack_a, stack_b, 1);
  if (!check_is_sorted(*stack_a))
    sort_four(stack_a, stack_b);
  pa(stack_a, stack_b, 1);
}

void  sort_big(t_node **stack_a, t_node **stack_b)
{
  push_a_b(stack_a, stack_b);

  int size = ft_lstsize(*stack_b);
  int index = size;
  int first_elem = 0;
  int second_elem = 0;

  while (index > 0)
  {
    index--;
    first_elem = get_curr_position(*stack_b, index);
    second_elem = get_curr_position(*stack_b, index - 1);
    if (index == 0 || first_elem < second_elem)
    {
      push_elem(stack_a, stack_b, first_elem);
    }
    else
    {
      push_elem(stack_a, stack_b, second_elem);
      first_elem = get_curr_position(*stack_b, index);
      index--;
      push_elem(stack_a, stack_b, first_elem);
      sa(stack_a, 1);
    }
  }
}