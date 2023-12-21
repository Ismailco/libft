/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iscourr <i_courr@hotmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 19:50:16 by iscourr           #+#    #+#             */
/*   Updated: 2023/12/20 10:05:22 by iscourr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int ch)
{
	if ((ch >= 'a' && ch <= 'z')
		|| (ch >= 'A' && ch <= 'Z')
		|| (ch >= '0' && ch <= '9'))
	{
		return (1);
	}
	return (0);
}

// #include <stdio.h>
// int main()
// {
// 	int i = ft_isalnum('a');
// 	printf("%d\n", i);
// 	return (0);
// }