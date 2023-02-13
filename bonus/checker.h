/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahansal <mahansal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 22:18:57 by mahansal          #+#    #+#             */
/*   Updated: 2023/02/13 22:33:02 by mahansal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H

# define CHECKER_H

typedef struct s_node
{
  int value;
  struct s_node *next;
} t_node;

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <limits.h>
#include "get_next_line.h"

void  sa(t_node **a);
void  sb(t_node **b);
void  ss(t_node **a, t_node **b);
void  pa(t_node **a, t_node **b);
void  pb(t_node **a, t_node **b);
void  ra(t_node **a);
void  rb(t_node **b);
void  rr(t_node **a, t_node **b);
void  rra(t_node **a);
void  rrb(t_node **b);
void  rrr(t_node **a, t_node **b);

int     check_numbers(char **numbers);
int     check_duplicates(t_node *stack_a);
int     check_maxmin_numbers(char **numbers);
int     check_is_sorted(t_node *stack);

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

t_node  *fill_stack(char **numbers);
void    init(char **numbers, t_node **stack_a);

char	*ft_strjoin(char *s1, char *s2);
char	*ft_strdup(char *s1);

#endif