/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iscourr <i_courr@hotmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 17:56:23 by iscourr           #+#    #+#             */
/*   Updated: 2023/12/20 11:43:43 by iscourr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size == 0)
	{
		return (ft_strlen(src));
	}
	while (size - 1 > i && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}

// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	char str[] = "Hello World";
// 	char str2[] = "Hello World";
// 	printf("%u\n", ft_strlcpy(str, str + 6, 6));
// 	printf("%s\n", str);
// 	return (0);
// }