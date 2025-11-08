/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miissa <miissa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 10:48:47 by miissa            #+#    #+#             */
/*   Updated: 2025/11/08 13:53:54 by miissa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*cdest;
	char	*csrc;

	if (!dest || !src)
		return (NULL);
	if (dest == src || n == 0)
		return (dest);
	i = 0;
	cdest = (char *) dest;
	csrc = (const char *) src;
	if (dest < src)
	{
		while (i < n)
		{
			cdest[i] = csrc[i];
			i++;
		}
	}
	while (n--)
		cdest[n] = csrc[n];
	return (dest);
}
