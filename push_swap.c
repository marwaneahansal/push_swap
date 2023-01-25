/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahansal <mahansal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 18:04:36 by mahansal          #+#    #+#             */
/*   Updated: 2023/01/25 18:09:24 by mahansal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void  print_list(t_node *head)
{
  t_node *tmp;

  tmp = head;
  while (tmp)
  {
    printf("%d | ", tmp->value);
    tmp = tmp->next;
  }
  printf("\n");
}

int main(int argc, char *argv[])
{
  t_node *stack_a;

  if (argc < 2)
  {
    write(2, "Error:\n No arguments given\n", 27);
    exit(1);
  }
  if (!check_numbers(argc, argv))
  {
    write(2, "Error:\n Invalid arguments\n", 26);
    exit(1);
  }
  stack_a = fill_stack(argc, argv);
  print_list(stack_a);
  return (0);
}