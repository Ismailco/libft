/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iscourr <i_courr@hotmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 19:57:09 by iscourr           #+#    #+#             */
/*   Updated: 2023/12/20 10:08:34 by iscourr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int ch)
{
	if (ch >= 0 && ch <= 127)
	{
		return (1);
	}
	return (0);
}

// #include <stdio.h>

// int main()
// {
// 	int i = ft_isascii(' ');
// 	printf("%d\n", i);
// 	return (0);
// }