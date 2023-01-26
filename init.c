/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahansal <mahansal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 18:00:34 by mahansal          #+#    #+#             */
/*   Updated: 2023/01/26 13:24:46 by mahansal         ###   ########.fr       */
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

void  init(int argc, char **argv, char **numbers, t_node **stack_a)
{
  if (!check_numbers(argc, argv, numbers))
  {
    if (numbers)
      free_dptr(numbers);
    exit_error("some arguments aren't integers");
  }

  if (!check_duplicates(argc, argv, numbers))
  {
    if (numbers)
      free_dptr(numbers);
    exit_error("some arguments are duplicates");
  }

  if (!check_maxmin_numbers(argc, argv, numbers))
  {
    if (numbers)
      free_dptr(numbers);
    exit_error("some arguments bigger than max int or smaller than int min");
  }
  
  *stack_a = fill_stack(argc, argv, numbers);
  if (check_is_sorted(*stack_a))
  {
    if (numbers)
      free_dptr(numbers);
    free_stack(*stack_a);
    exit(0);
  }
}