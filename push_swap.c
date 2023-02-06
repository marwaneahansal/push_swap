/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahansal <mahansal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 18:04:36 by mahansal          #+#    #+#             */
/*   Updated: 2023/02/03 19:13:42 by mahansal         ###   ########.fr       */
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
  tmp = head;
  while (tmp)
  {
    printf("%d | ", tmp->index);
    tmp = tmp->next;
  }
  printf("\n");
}

void  start_sort(t_node **stack_a, t_node **stack_b)
{
  int   len;

  len = ft_lstsize(*stack_a);
  if (len == 2)
    sort_two(stack_a);
  else if (len == 3)
    sort_three(stack_a);
  else if (len == 4)
    sort_four(stack_a, stack_b);
  else if (len == 5)
    sort_five(stack_a, stack_b);
  else
    sort_big(stack_a, stack_b);
}

int main(int argc, char *argv[])
{
  //! handle case: +0 0000 0 -0
  //! handle case: +20 20
  //! handle case: when no arguments given give the prompt back
  t_node *stack_a;
  t_node *stack_b;
  char   **numbers;
  
  numbers = NULL;
  stack_a = NULL;
  stack_b = NULL;
  if (argc < 2)
    exit_error();
  if (argc == 2)
    numbers = ft_split(argv[1], ' ');
    
  init(argc, argv, numbers, &stack_a);

  // print_list(stack_a);
  
  start_sort(&stack_a, &stack_b);

  // print_list(stack_a);
  if (numbers)
      free_dptr(numbers);
  free_stack(stack_a);
  
  return (0);
}