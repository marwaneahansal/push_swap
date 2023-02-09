/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahansal <mahansal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 18:04:36 by mahansal          #+#    #+#             */
/*   Updated: 2023/02/10 00:12:15 by mahansal         ###   ########.fr       */
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

char  *join_argv(int argc, char **argv)
{
  int i;
  char  *joined_argv;

  i = 1;
  joined_argv = NULL;
  while (i < argc)
  {
    joined_argv = ft_strjoin(joined_argv, argv[i]);
    joined_argv = ft_strjoin(joined_argv, " ");
    i++;
  }
  return (joined_argv);
}

int main(int argc, char *argv[])
{
  t_node *stack_a;
  t_node *stack_b;
  char   **numbers;
  char  *joined_argv;
  
  numbers = NULL;
  stack_a = NULL;
  stack_b = NULL;
  if (argc < 2)
    exit_error();
  joined_argv = join_argv(argc, argv);
  numbers = ft_split(joined_argv, ' ');
    
  init(numbers, &stack_a);

  // print_list(stack_a);
  
  start_sort(&stack_a, &stack_b);

  print_list(stack_a);
  if (numbers)
      free_dptr(numbers);
  free_stack(stack_a);
  
  return (0);
}