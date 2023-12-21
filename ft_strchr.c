/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iscourr <i_courr@hotmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 18:47:06 by iscourr           #+#    #+#             */
/*   Updated: 2023/12/20 10:58:12 by iscourr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strchr(const char *s, int c)
{
	while (*s != (char)c)
	{
		if (!*s++)
			return (NULL);
	}
	return ((char *)s);
}

// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	char str[] = "Hello World";
// 	printf("%s\n", ft_strchr(str, 'o'));
// 	printf("%s\n", strchr(str, 'o'));
// 	return (0);
// }