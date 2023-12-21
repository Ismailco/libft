/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iscourr <i_courr@hotmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 13:21:18 by iscourr           #+#    #+#             */
/*   Updated: 2023/12/21 07:14:37 by iscourr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	t_list	*tmp;

	tmp = lst;
	del(tmp->content);
	free(tmp);
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
// 	printf("%s\n", node->content);
// 	ft_lstdelone(node, del);
// 	printf("%s\n", node->content);
// 	return (0);
// }