/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahansal <mahansal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 18:04:36 by mahansal          #+#    #+#             */
/*   Updated: 2023/01/26 11:16:55 by mahansal         ###   ########.fr       */
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
  char   **numbers;
  
  numbers = NULL;
  stack_a = NULL;
  if (argc < 2)
    exit_error("No arguments given", numbers);
  if (argc == 2)
    numbers = ft_split(argv[1], ' ');
  if (!check_numbers(argc, argv, numbers))
    exit_error("some arguments aren't integers", numbers);
  stack_a = fill_stack(argc, argv, numbers);
  print_list(stack_a);
  return (0);
}