/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iscourr <i_courr@hotmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 08:49:28 by iscourr           #+#    #+#             */
/*   Updated: 2023/12/21 14:45:21 by iscourr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	int		len;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!s1 || !set)
		return (NULL);
	len = ft_strlen((char *)s1);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (len > i && ft_strchr(set, s1[len]))
		len--;
	res = (char *)malloc((len - i + 2) * sizeof(char));
	if (!res)
		return (NULL);
	while (i <= len)
	{
		res[j] = s1[i];
		i++;
		j++;
	}
	res[j] = '\0';
	return (res);
}

// #include <stdio.h>
// int main()
// {
// 	char a[] = "Hello World He";
// 	char b[] = "He";
// 	char *c = ft_strtrim(a, b);
// 	printf("%s\n", c);
// }