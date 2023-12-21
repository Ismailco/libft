/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iscourr <i_courr@hotmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 11:24:13 by iscourr           #+#    #+#             */
/*   Updated: 2023/12/20 10:54:22 by iscourr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int ch)
{
	if (ch >= 'a' && ch <= 'z')
	{
		ch -= 32;
	}
	return (ch);
}

// #include <stdio.h>
// int main()
// {
// 	char str[] = "Hello World";
// 	int i = 0;
// 	while (str[i])
// 	{
// 		str[i] = ft_toupper(str[i]);
// 		i++;
// 	}
// 	printf("%s\n", str);
// 	return (0);
// }