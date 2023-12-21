/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iscourr <i_courr@hotmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 19:16:39 by iscourr           #+#    #+#             */
/*   Updated: 2023/12/21 14:56:42 by iscourr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_int_len(int n)
{
	int	len;

	len = 1;
	if (n < 0)
		n *= -1;
	if (n == 0)
		return (1);
	while (n)
	{
		n /= 10;
		len++;
	}
	len--;
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		sign;
	int		tmp;

	tmp = n;
	sign = (n < 0);
	len = ft_int_len(n) + sign;
	str = (char *)malloc(len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	while (len--)
	{
		if (sign)
			str[len] = -(tmp % 10) + '0';
		else
			str[len] = (tmp % 10) + '0';
		tmp /= 10;
	}
	if (sign)
		str[0] = '-';
	return (str);
}

// #include <stdio.h>
// int main()
// {
// 	int a = -2147483648;
// 	char *b = ft_itoa(a);
// 	printf("%s\n", b);
// }