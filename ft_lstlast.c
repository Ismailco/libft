/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iscourr <i_courr@hotmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 14:49:16 by iscourr           #+#    #+#             */
/*   Updated: 2023/12/21 06:55:29 by iscourr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}

// #include <stdio.h>
// int main()
// {
// 	t_list	*root;
// 	t_list	*node;
// 	t_list	*node2;
// 	t_list	*last;

// 	root = ft_lstnew("This is Root");
// 	node = ft_lstnew("This is Node 1");
// 	node2 = ft_lstnew("This is Node 2");
// 	ft_lstadd_back(&root, node);
// 	ft_lstadd_back(&root, node2);
// 	last = ft_lstlast(root);
// 	printf("%s\n", last->content);
// 	return (0);
// }