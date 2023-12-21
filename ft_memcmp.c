/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iscourr <i_courr@hotmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 14:06:17 by iscourr           #+#    #+#             */
/*   Updated: 2023/12/21 15:24:23 by iscourr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s_one;
	unsigned char	*s_two;
	size_t			i;

	s_one = (unsigned char *)s1;
	s_two = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (s_one[i] > s_two[i] || s_one[i] < s_two[i])
			return (s_one[i] - s_two[i]);
		i++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	char *str = "Hello World";
// 	char *str2 = "Helpo World";
// 	int i = ft_memcmp(str, str2, 6);
// 	int j = memcmp(str, str2, 6);
// 	printf("%d\n%d\n", i, j);
// 	return (0);
// }