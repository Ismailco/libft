/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iscourr <i_courr@hotmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 14:38:25 by iscourr           #+#    #+#             */
/*   Updated: 2023/12/20 11:54:58 by iscourr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"
#include <string.h>

char	*ft_strnstr(const char *str, const char *sub, size_t len)
{
	size_t	i;
	size_t	sub_len;

	i = 0;
	sub_len = ft_strlen((char *)sub);
	if (sub_len == 0)
		return ((char *)str);
	while (*str && i + sub_len <= len)
	{
		if (ft_strncmp((char *)str, (char *)sub, sub_len) == 0)
		{
			return ((char *)str);
		}
		i++;
		str++;
	}
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	char str[] = "Hello World";
// 	char str2[] = "Hello World";
// 	printf("%s\n", ft_strnstr(str, "l", 11));
// 	printf("%s\n", strnstr(str2, "l", 11));
// 	return (0);
// }
