/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iscourr <i_courr@hotmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 18:04:45 by iscourr           #+#    #+#             */
/*   Updated: 2023/12/20 11:39:37 by iscourr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned	int	len(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	y;

	i = 0;
	y = 0;
	while (dest[i] && i < size)
	{
		i++;
		y++;
	}
	i = 0;
	while (src[i])
	{
		i++;
		y++;
	}
	return (y);
}

unsigned	int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	y;
	unsigned int	leng;

	i = 0;
	y = 0;
	leng = len(dest, src, size);
	while (dest[y])
	{
		y++;
	}
	while (src[i] && y + 1 < size)
	{
		dest[y] = src[i];
		i++;
		y++;
	}
	dest[y] = '\0';
	return (leng);
}

// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	char str[11] = "Hello World";
// 	char str3[40] = "welcome to the jungle, ";
// 	printf("%u\n", ft_strlcat(str3, str, 30));
// 	printf("%s\n", str3);
// 	return (0);
// }