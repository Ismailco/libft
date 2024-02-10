/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iscourr <i_courr@hotmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 14:38:25 by iscourr           #+#    #+#             */
/*   Updated: 2024/01/10 15:28:08 by iscourr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	sub_len;

	i = 0;
	sub_len = ft_strlen((char *)needle);
	if (!haystack && len == 0)
		return (NULL);
	if (sub_len == 0)
		return ((char *)haystack);
	while (*haystack && i + sub_len <= len)
	{
		if (ft_strncmp((char *)haystack, (char *)needle, sub_len) == 0)
		{
			return ((char *)haystack);
		}
		i++;
		haystack++;
	}
	return (NULL);
}
