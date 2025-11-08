/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miissa <miissa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 08:42:19 by miissa            #+#    #+#             */
/*   Updated: 2025/11/08 09:46:07 by miissa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		size;
	int		i;
	char	*dup;

	size = ft_strlen(s);
	if (size > 0)
	{
		dup = (char *) malloc ((size + 1) * sizeof(char));
		if (dup)
		{
			i = 0;
			while (s[i])
			{
				dup[i] = s[i];
				i++;
			}
			dup[size] = '\0';
			return (dup);
		}
	}
	return (NULL);
}
