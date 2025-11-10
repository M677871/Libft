/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 09:31:39 by marvin            #+#    #+#             */
/*   Updated: 2025/11/10 09:31:39 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_in_set(char c, const char *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

size_t	len_trimmed(const char *s1, const char *set)
{
	size_t	start;
	size_t	count;

	start = 0;
	count = 0;
	while (s1[start])
	{
		if (is_in_set(s1[start], set))
			count++;
		start++;
	}
	return (count);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*trimmed;
	size_t	size_trimmed;
	size_t	i;

	if (!set)
		return ((char *)s1);
	if (!s1)
		return (NULL);
	size_trimmed = ft_strlen(s1) - len_trimmed(s1, set);
	trimmed = (char *)malloc(sizeof(char) * (size_trimmed + 1));
	if (!trimmed)
		return (NULL);
	i = 0;
	size_trimmed = 0;
	while (s1[i])
	{
		if (!is_in_set(s1[i], set))
		{
			trimmed[size_trimmed] = s1[i];
			size_trimmed++;
		}
		i++;
	}
	trimmed[size_trimmed] = '\0';
	return (trimmed);
}
