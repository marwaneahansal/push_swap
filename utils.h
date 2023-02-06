/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahansal <mahansal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 14:07:11 by mahansal          #+#    #+#             */
/*   Updated: 2023/01/28 18:49:58 by mahansal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H

# define UTILS_H

#include "push_swap.h"

t_node  *lst_new(int value);
void    ft_lstadd_back(t_node **head, t_node *new);
void    ft_lstadd_front(t_node **head, t_node *new);
int     ft_lstsize(t_node *head);

char	  **ft_split(char const *s, char c);
int	    ft_atoi(const char *str);

void    ft_putstr_fd(char *s, int fd);
void    exit_error(void);
int     count_numbers(char **numbers);
int	    ft_isdigit(int c);
int	    ft_strcmp(const char *s1, const char *s2);
void	  free_dptr(char **ptr);
void    free_stack(t_node *head);
# endif