/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iscourr <i_courr@hotmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 14:40:45 by iscourr           #+#    #+#             */
/*   Updated: 2023/12/21 07:20:41 by iscourr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*curr;
	t_list	*tmp;

	curr = *lst;
	while (curr != NULL)
	{
		tmp = curr;
		curr = curr->next;
		del(tmp->content);
		free(tmp);
	}
	*lst = NULL;
}

// #include <stdio.h>
// #include <string.h>
// void	del(void *content)
// {
// 	free(content);
// }

// int main()
// {
// 	t_list	*root;
// 	t_list	*node;
// 	t_list	*node2;

// 	root = ft_lstnew(strdup("This is Root"));
// 	node = ft_lstnew(strdup("This is Node 1"));
// 	node2 = ft_lstnew(strdup("This is Node 2"));
// 	ft_lstadd_back(&root, node);
// 	ft_lstadd_back(&root, node2);
// 	printf("%s\n", root->content);
// 	ft_lstclear(&root, del);
// 	printf("%s\n", root->content);
// 	return (0);
// }