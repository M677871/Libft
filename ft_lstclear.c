/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miissa <missa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 08:26:53 by miissa            #+#    #+#             */
/*   Updated: 2025/11/16 08:26:53 by miissa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;
	t_list	*to_delete;

	if (!lst || !del)
		return ;
	temp = *lst;
	while (temp)
	{
		to_delete = temp;
		ft_lstdelone(to_delete, del);
		temp = temp->next;
	}
	*lst = NULL;
}
