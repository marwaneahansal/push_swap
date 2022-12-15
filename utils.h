/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahansal <mahansal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 14:07:11 by mahansal          #+#    #+#             */
/*   Updated: 2022/12/15 14:11:48 by mahansal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H

# define UTILS_H

#include "push_swap.h"

t_node  *lst_new(int value);
void    lst_add_back(t_node **head, t_node *new);
void    print_list(t_node *head);

# endif