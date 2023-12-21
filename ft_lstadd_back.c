/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iscourr <i_courr@hotmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 15:00:18 by iscourr           #+#    #+#             */
/*   Updated: 2023/12/21 06:46:25 by iscourr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	last = *lst;
	while (last->next != NULL)
	{
		last = last->next; 
	}
	last->next = new;
}

// #include <stdio.h>
// int main()
// {
// 	t_list	*root;
// 	t_list	*node;
// 	t_list	*node2;

// 	root = ft_lstnew("Root, Hello World");
// 	node = ft_lstnew("Node 1, Hello World 2");
// 	node2 = ft_lstnew("Node 2, Hello World 3");
// 	ft_lstadd_back(&root, node);
// 	ft_lstadd_back(&root, node2);
// 	printf("This should be Root: %s\n", root->content);
// 	printf("This is node: %s\n", root->next->content);
// 	printf("This is node2: %s\n", root->next->next->content);
// 	return (0);
// }