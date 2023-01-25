/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahansal <mahansal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 18:04:36 by mahansal          #+#    #+#             */
/*   Updated: 2023/01/25 17:51:05 by mahansal         ###   ########.fr       */
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
  if (argc < 2)
  {
    write(2, "Error:\n No arguments given\n", 27);
    exit(1);
  }
  // push arguments to the list (stack a)
  t_node *stack_a;
  t_node *stack_b;
  t_node *new;
  int i;

  i = 1;
  stack_a = NULL;
  stack_b = NULL;  
  while (i < argc)
  {
    new = lst_new(ft_atoi(argv[i]));
    lst_add_back(&stack_a, new);
    i++;
  }
  lst_add_back(&stack_b, lst_new(1));
  print_list(stack_a);
  rrr(&stack_a, &stack_a);
  print_list(stack_a);
  return (0);
}