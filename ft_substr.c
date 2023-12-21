/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iscourr <i_courr@hotmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 06:31:33 by iscourr           #+#    #+#             */
/*   Updated: 2023/12/21 15:32:25 by iscourr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*sub;

	if (!s)
		return (NULL);
	if (start >= (unsigned int)ft_strlen(s))
	{
		sub = malloc(1 * sizeof(char));
		if (!sub)
			return (NULL);
		sub[0] = '\0';
		return (sub);
	}
	if (len > (unsigned int)ft_strlen(s) - start)
		len = (unsigned int)ft_strlen(s) - start;
	i = 0;
	sub = (char *)malloc((len + 1) * sizeof(char));
	if (!sub)
		return (NULL);
	while (len > 0 && s[start])
	{
		sub[i++] = s[start++];
		len--;
	}
	sub[i] = '\0';
	return (sub);
}

// #include <stdio.h>
// int main()
// {
// 	char a[] = "Hello World, to the jungle!";
// 	printf("%s", ft_substr(a, 6, 5));
// }