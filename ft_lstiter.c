/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iscourr <i_courr@hotmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 10:41:21 by iscourr           #+#    #+#             */
/*   Updated: 2023/12/21 07:21:50 by iscourr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst)
		return ;
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}

// #include <stdio.h>
// #include <string.h>
// void	f(void *content)
// {
// 	printf("%s\n", content);
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
// 	ft_lstiter(root, f);
// 	return (0);
// }