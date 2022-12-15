/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahansal <mahansal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 18:04:46 by mahansal          #+#    #+#             */
/*   Updated: 2022/12/15 19:14:05 by mahansal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H

# define PUSH_SWAP_H

#include <stdlib.h>
#include <unistd.h>

typedef struct s_node
{
  int value;
  struct s_node *next;
  struct s_node *prev;
} t_node;


void  sa(t_node **a);
void  sb(t_node **b);
void  ss(t_node **a, t_node **b);

#endif
