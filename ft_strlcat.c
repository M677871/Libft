/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miissa <miissa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 11:50:26 by miissa            #+#    #+#             */
/*   Updated: 2025/11/08 09:46:34 by miissa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	len_d;
	size_t	len_s;
	size_t	result;
	size_t	i;

	len_d = ft_strlen(dest);
	len_s = ft_strlen(src);
	if (size > len_d)
		result = len_s + len_d;
	else
		result = len_s + size;
	i = 0;
	while (src[i] && (len_d + 1 < size))
	{
		dest[len_d] = src[i];
		len_d++;
		i++;
	}
	if (len_d < size)
		dest[len_d] = '\0';
	return (result);
}
