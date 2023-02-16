/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahansal <mahansal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 18:04:36 by mahansal          #+#    #+#             */
/*   Updated: 2023/02/16 02:11:37 by mahansal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	start_sort(t_node **stack_a, t_node **stack_b)
{
	int	size;

	size = ft_lstsize(*stack_a);
	if (size == 2)
		sort_two(stack_a);
	else if (size == 3)
		sort_three(stack_a);
	else if (size == 4)
		sort_four(stack_a, stack_b);
	else if (size == 5)
		sort_five(stack_a, stack_b);
	else if (size <= 20)
		sort_big(stack_a, stack_b, 3);
	else if (size <= 100)
		sort_big(stack_a, stack_b, 15);
	else
		sort_big(stack_a, stack_b, 40);
}

char	*join_argv(int argc, char **argv)
{
	int		i;
	int		j;
	char	*joined_argv;

	i = 1;
	joined_argv = NULL;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] == ' ')
			j++;
		if (argv[i][j] == '\0')
			exit_error();
		joined_argv = ft_strjoin(joined_argv, argv[i]);
		joined_argv = ft_strjoin(joined_argv, " ");
		i++;
	}
	return (joined_argv);
}

int	main(int argc, char *argv[])
{
	t_node	*stack_a;
	t_node	*stack_b;
	char	**numbers;
	char	*joined_argv;

	numbers = NULL;
	stack_a = NULL;
	stack_b = NULL;
	if (argc == 1)
		exit(0);
	joined_argv = join_argv(argc, argv);
	numbers = ft_split(joined_argv, ' ');
	free(joined_argv);
	init(numbers, &stack_a);
	start_sort(&stack_a, &stack_b);
	free_dptr(numbers);
	free_stack(stack_a);
	return (0);
}
