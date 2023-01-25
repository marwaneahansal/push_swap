/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahansal <mahansal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 18:04:46 by mahansal          #+#    #+#             */
/*   Updated: 2023/01/25 17:17:06 by mahansal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H

# define PUSH_SWAP_H

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

typedef struct s_node
{
  int value;
  struct s_node *next;
} t_node;


void  sa(t_node **a, int write_op);
void  sb(t_node **b, int write_op);
void  ss(t_node **a, t_node **b);
void  pa(t_node **a, t_node **b, int write_op);
void  pb(t_node **a, t_node **b, int write_op);

#endif
