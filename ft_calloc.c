/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iscourr <i_courr@hotmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 15:05:34 by iscourr           #+#    #+#             */
/*   Updated: 2023/12/11 16:01:07 by iscourr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*res;

	res = malloc(n * size);
	if (res == NULL)
		return (NULL);
	ft_bzero(res, n * size);
	return (res);
}
