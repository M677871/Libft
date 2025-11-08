/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miissa <miissa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 12:31:46 by miissa            #+#    #+#             */
/*   Updated: 2025/11/08 09:42:17 by miissa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int		i;
	char	search;

	i = 0;
	search = (char) c;
	while (str[i])
	{
		if (str[i] == search)
			return (&str[i]);
		i++;
	}
	if (search == '\0')
		return (&str[i]);
	return (0);
}
