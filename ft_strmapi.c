/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iscourr <i_courr@hotmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 16:16:33 by iscourr           #+#    #+#             */
/*   Updated: 2023/12/21 14:57:08 by iscourr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*res;

	i = 0;
	if (!s || !f)
		return (NULL);
	res = malloc(sizeof(char) * ft_strlen((char *)s) + 1);
	if (!res)
		return (NULL);
	while (s[i])
	{
		res[i] = f(i, s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}

// char	func(unsigned int i, char c)
// {
// 	i++;
// 	return ft_tolower(c);
// }
// #include <stdio.h>
// int main()
// {
// 	char a[] = "HELLO WORLD";
// 	char *b = ft_strmapi(a, &func);
// 	printf("%s\n", b);
// }