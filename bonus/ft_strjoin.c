/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahansal <mahansal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 23:11:45 by mahansal          #+#    #+#             */
/*   Updated: 2023/02/13 22:31:40 by mahansal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

size_t	ft_strlen(char *s)
{
	size_t	index;

	index = 0;
	while (s[index])
	{
		index++;
	}
	return (index);
}

char	*ft_strdup(char *s1)
{
	char	*dst;
	int		index;
	size_t	dst_len;

	if (!s1)
		return (0);
	dst_len = ft_strlen(s1);
	dst = malloc((dst_len + 1) * sizeof(char));
	index = 0;
	if (!dst)
		return (0);
	while (s1[index] != '\0')
	{
		dst[index] = s1[index];
		index++;
	}
	dst[index] = '\0';
	return (dst);
}

char	*join_str(char *joined_str, char *s1, char *s2)
{
	size_t	s1_index;
	size_t	s2_index;
	size_t	s1_len;
	size_t	s2_len;

	s1_index = 0;
	s2_index = 0;
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	while (s1_index < s1_len)
	{
		joined_str[s1_index] = s1[s1_index];
		s1_index++;
	}
	while (s2_index < s2_len)
	{
		joined_str[s1_index] = s2[s2_index];
		s1_index++;
		s2_index++;
	}
	joined_str[s1_index] = '\0';
	return (joined_str);
}

char	*ft_strjoin(char *s1, char *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	char	*joined_str;

	if (!s2)
		return (0);
	if (!s1)
		return (ft_strdup(s2));
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	joined_str = malloc((s1_len + s2_len + 1) * sizeof(char));
	if (!joined_str)
	{
		free(s1);
		return (0);
	}
	joined_str = join_str(joined_str, s1, s2);
	free(s1);
	return (joined_str);
}
