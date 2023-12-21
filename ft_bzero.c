/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iscourr <i_courr@hotmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 11:34:21 by iscourr           #+#    #+#             */
/*   Updated: 2023/12/20 10:44:54 by iscourr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)s;
	while (n > 0)
	{
		*p = '\0';
		p++;
		n--;
	}
}

// #include <stdio.h>

// int main()
// {
// 	char str[] = "Hello World";
// 	ft_bzero(str, 2);
// 	printf("%s\n", str);
// 	return (0);
// }