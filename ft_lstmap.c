/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlouise <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 02:06:01 by dlouise           #+#    #+#             */
/*   Updated: 2015/11/29 02:07:50 by dlouise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*next;
	t_list	*current;
	t_list	*new;
	t_list	*result;

	if (NULL == lst)
		return (NULL);
	new = f(lst);
	next = ft_lstnew(new->content, new->content_size);
	result = next;
	current = lst->next;
	while (NULL != current)
	{
		new = f(current);
		new = ft_lstnew(new->content, new->content_size);
		next->next = new;
		current = current->next;
		next = next->next;
	}
	return (result);
}
