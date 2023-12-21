/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iscourr <i_courr@hotmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 17:34:17 by iscourr           #+#    #+#             */
/*   Updated: 2023/12/21 06:48:10 by iscourr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

// #include <stdio.h>
// int main()
// {
// 	t_list	*root;
// 	t_list	*node;

// 	root = ft_lstnew("Root, Hello World");
// 	node = ft_lstnew("Node, Hello World");
// 	ft_lstadd_front(&root, node);
// 	printf("This should be Node: %s\n", root->content);
// 	printf("This is root: %s\n", root->next->content);
// 	return (0);
// }