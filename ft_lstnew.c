/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iscourr <i_courr@hotmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 17:07:17 by iscourr           #+#    #+#             */
/*   Updated: 2023/12/21 06:25:59 by iscourr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*root;

	root = malloc(sizeof(t_list));
	if (!root)
		return (NULL);
	root->content = content;
	root->next = NULL;
	return (root);
}

// #include <stdio.h>
// int main()
// {
// 	t_list	*node;

// 	node = ft_lstnew("Hello World");
// 	printf("%s\n", node->content);
// 	return (0);
// }