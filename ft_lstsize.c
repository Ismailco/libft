/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iscourr <i_courr@hotmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 14:44:09 by iscourr           #+#    #+#             */
/*   Updated: 2023/12/21 07:12:23 by iscourr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

int	ft_lstsize(t_list *lst)
{
	int	len;

	len = 0;
	while (lst != NULL)
	{
		len++;
		lst = lst->next;
	}
	return (len);
}

// #include <stdio.h>
// int main()
// {
// 	t_list	*root;
// 	t_list	*node;
// 	t_list	*node2;

// 	root = ft_lstnew("This is Root");
// 	node = ft_lstnew("This is Node 1");
// 	node2 = ft_lstnew("This is Node 2");
// 	ft_lstadd_back(&root, node);
// 	ft_lstadd_back(&root, node2);
// 	printf("There is -> %d <- nodes in this list\n", ft_lstsize(root));
// 	return (0);
// }