/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iscourr <i_courr@hotmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 11:26:24 by iscourr           #+#    #+#             */
/*   Updated: 2023/12/20 10:55:05 by iscourr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int ch)
{
	if (ch >= 'A' && ch <= 'Z')
	{
		ch += 32;
	}
	return (ch);
}

// #include <stdio.h>
// int main()
// {
// 	char str[] = "HELLO WORLD";
// 	int i = 0;
// 	while (str[i])
// 	{
// 		str[i] = ft_tolower(str[i]);
// 		i++;
// 	}
// 	printf("%s\n", str);
// 	return (0);
// }