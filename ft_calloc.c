/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miissa <miissa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 07:40:33 by miissa            #+#    #+#             */
/*   Updated: 2025/11/08 09:39:42 by miissa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	i;
	char	*dest;

	if (size == 0 || nmemb == 0 || nmemb > INT_MAX / size)
	{
		return (NULL);
	}
	i = 0;
	dest = (char *) malloc (nmemb * size);
	if (!dest)
	{
		return (NULL);
	}
	while (i < nmemb)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
