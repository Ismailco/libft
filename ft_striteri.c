/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iscourr <i_courr@hotmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 16:56:59 by iscourr           #+#    #+#             */
/*   Updated: 2023/12/21 15:01:11 by iscourr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// #include <stdio.h>
// void print_char(unsigned int index, char *c)
// {
//     printf("Character at index %u: %c\n", index, *c);
// }
// int main()
// {
// 	char str[] = "Hello World";
// 	ft_striteri(str, &print_char);
// 	return (0);
// }