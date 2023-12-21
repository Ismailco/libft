/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iscourr <i_courr@hotmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 12:45:13 by iscourr           #+#    #+#             */
/*   Updated: 2023/12/20 10:49:12 by iscourr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (!dest && !src)
		return (NULL);
	if (d > s)
	{
		while (len-- > 0)
		{
			d[len] = s[len];
		}
	}
	else
	{
		while (len > 0)
		{
			*d++ = *s++;
			len--;
		}
	}
	return (dest);
}

// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	char str[] = "Hello World";
// 	char str2[] = "Hello World";
// 	ft_memmove(str, str + 4, 4);
// 	printf("%s\n", str);
// 	memmove(str2, str2 + 4, 4);
// 	printf("%s\n", str2);
// 	return (0);
// }