/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgomes-s <mgomes-s@42.rio>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 22:35:02 by mgomes-s          #+#    #+#             */
/*   Updated: 2024/10/12 02:50:22 by mgomes-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*ptr;

	if (!lst || !f)
		return (NULL);
	head = NULL;
	while (lst)
	{
		ptr = ft_lstnew((*f)(lst->content));
		if (!ptr)
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		ft_lstadd_back(&head, ptr);
		lst = lst->next;
	}
	return (head);
}
