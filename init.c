/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahansal <mahansal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 18:00:34 by mahansal          #+#    #+#             */
/*   Updated: 2023/01/28 18:57:32 by mahansal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node *fill_stack(int argc, char **argv, char **numbers)
{
  t_node *stack;
  int i;

  stack = NULL;
  i = 1;
  if (numbers)
  {
    argc = count_numbers(numbers);
    argv = numbers;
    i = 0;
  }
  while (i < argc)
  {
    ft_lstadd_back(&stack, lst_new(ft_atoi(argv[i])));
    i++;
  }
  return (stack);
}

void  assign_indexs(t_node *stack_a)
{
  t_node *tmp;
  t_node  *high;
  int     value;
  int     size;

  size = ft_lstsize(stack_a);
  while (--size > 0)
  {
    tmp = stack_a; 
    value = INT_MIN;
    high = NULL;
    while (tmp)
    {
      if (tmp->value > value && tmp->index == 0)
      {
        value = tmp->value;
        high = tmp;
        tmp = stack_a;
      }
      else
        tmp = tmp->next;
    }
    if (high)
      high->index = size;
  }
}

void  init(int argc, char **argv, char **numbers, t_node **stack_a)
{
  if (!check_numbers(argc, argv, numbers) ||
      !check_duplicates(argc, argv, numbers) ||
      !check_maxmin_numbers(argc, argv, numbers))
  {
    if (numbers)
      free_dptr(numbers);
    exit_error();
  }
  
  *stack_a = fill_stack(argc, argv, numbers);
  assign_indexs(*stack_a);
  if (check_is_sorted(*stack_a))
  {
    if (numbers)
      free_dptr(numbers);
    free_stack(*stack_a);
    exit(0);
  }
}