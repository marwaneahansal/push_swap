/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_fn.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahansal <mahansal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 13:29:38 by mahansal          #+#    #+#             */
/*   Updated: 2023/01/26 17:51:50 by mahansal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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