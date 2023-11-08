/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muscakir <muscakir@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 19:05:30 by muscakir          #+#    #+#             */
/*   Updated: 2023/11/08 19:05:30 by muscakir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*node;
	t_list	*result_lst;
	void	*content;

	if (!lst || !f || !del)
		return (0);
	result_lst = 0;
	while (lst)
	{
		content = f(lst->content);
		node = ft_lstnew(content);
		if (!node)
		{
			free(content);
			ft_lstclear(&result_lst, del);
			return (0);
		}
		ft_lstadd_back(&result_lst, node);
		lst = lst->next;
	}
	return (result_lst);
}
