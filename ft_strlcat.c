/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iscourr <i_courr@hotmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 18:04:45 by iscourr           #+#    #+#             */
/*   Updated: 2024/01/09 09:44:04 by iscourr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	len(char *dest, char *src, size_t size)
{
	size_t	i;
	size_t	y;

	i = 0;
	y = 0;
	while (dest[i] && i < size)
	{
		i++;
		y++;
	}
	i = 0;
	while (src[i])
	{
		i++;
		y++;
	}
	return (y);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	y;
	size_t	leng;

	i = 0;
	y = 0;
	leng = len(dst, (char *)src, dstsize);
	while (dst[y])
	{
		y++;
	}
	while (src[i] && y + 1 < dstsize)
	{
		dst[y] = src[i];
		i++;
		y++;
	}
	dst[y] = '\0';
	return (leng);
}
