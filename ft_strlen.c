/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iscourr <i_courr@hotmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 09:55:00 by iscourr           #+#    #+#             */
/*   Updated: 2023/12/20 10:00:26 by iscourr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

// #include <stdio.h>
// int main()
// {
// 	char *str = "Hello World";
// 	int i = ft_strlen(str);
// 	printf("%d\n", i);
// 	return (0);
// }