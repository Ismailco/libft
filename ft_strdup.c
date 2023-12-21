/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iscourr <i_courr@hotmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 15:25:43 by iscourr           #+#    #+#             */
/*   Updated: 2023/12/20 12:00:05 by iscourr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>
#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*s;
	size_t	len;

	len = ft_strlen((char *)str);
	s = malloc(len + 1);
	if (s == NULL)
		return (NULL);
	ft_strlcpy(s, (char *)str, len + 1);
	return (s);
}

// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	char str[] = "Hello World";
// 	char *str2;
// 	char *str3;
// 	str2 = ft_strdup(str);
// 	str3 = strdup(str);
// 	printf("%s\n", str2);
// 	printf("%s\n", str3);
// 	return (0);
// }