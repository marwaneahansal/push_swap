/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahansal <mahansal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 18:00:34 by mahansal          #+#    #+#             */
/*   Updated: 2023/01/26 11:15:38 by mahansal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node *fill_stack(int argc, char **argv, char **numbers)
{
  t_node *stack;
  t_node *new;
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
    new = lst_new(ft_atoi(argv[i]));
    lst_add_back(&stack, new);
    i++;
  }
  return (stack);
}