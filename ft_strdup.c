/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iscourr <i_courr@hotmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 15:25:43 by iscourr           #+#    #+#             */
/*   Updated: 2024/01/09 09:52:57 by iscourr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s;
	size_t	len;

	len = ft_strlen((char *)s1);
	s = malloc(len + 1);
	if (s == NULL)
		return (NULL);
	ft_strlcpy(s, (char *)s1, len + 1);
	return (s);
}
