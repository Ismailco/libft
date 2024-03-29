/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iscourr <i_courr@hotmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 12:21:36 by iscourr           #+#    #+#             */
/*   Updated: 2024/01/08 15:19:55 by iscourr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		len;
	char	*str;

	str = (char *)s;
	len = ft_strlen(s);
	if (c == '\0')
		return (str + len);
	while (len >= 0)
	{
		if (str[len] == (char)c)
		{
			return (str + (len));
		}
		len--;
	}
	return (NULL);
}
