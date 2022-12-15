/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahansal <mahansal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 18:04:36 by mahansal          #+#    #+#             */
/*   Updated: 2022/12/15 19:15:22 by mahansal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "utils.h"
#include <stdio.h>

int main(int argc, char *argv[])
{
  if (argc < 2)
  {
    write(2, "Error: No arguments given\n", 26);
    exit(1);
  }

  // push arguments to the list (stack a)
  t_node *head;
  t_node *new;
  int i;

  i = 1;
  head = NULL;
  while (i < argc)
  {
    new = lst_new(atoi(argv[i]));
    lst_add_back(&head, new);
    i++;
  }
  print_list(head);
  ss(&head, &head);
  print_list(head);
  return (0);
}