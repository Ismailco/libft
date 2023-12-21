/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iscourr <i_courr@hotmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 12:18:17 by iscourr           #+#    #+#             */
/*   Updated: 2023/12/20 10:03:46 by iscourr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (!dest && !src)
	{
		return (NULL);
	}
	while (len > 0)
	{
		*d++ = *s++;
		len--;
	}
	return (dest);
}

// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	char *str = "Hello World";
// 	char *str2[10];

// 	printf("%s\n", ft_memcpy(str2, str, 4));
// 	printf("%s\n", memcpy(str2, str, 4));
// }