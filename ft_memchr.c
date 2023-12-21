/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iscourr <i_courr@hotmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 13:10:56 by iscourr           #+#    #+#             */
/*   Updated: 2023/12/20 09:51:07 by iscourr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*src;

	src = (unsigned char *)s;
	while (n > 0)
	{
		if (*src == (unsigned char)c)
		{
			return ((void *)src);
		}
		src++;
		n--;
	}
	return (NULL);
}

// #include <stdio.h>
// int main()
// {
// 	char *str = "Hello World";
// 	char *ptr = ft_memchr(str, 'W', 6);
// 	printf("%s\n", ptr);
// 	return (0);
// }
