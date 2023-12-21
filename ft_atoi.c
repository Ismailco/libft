/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iscourr <i_courr@hotmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 18:08:40 by iscourr           #+#    #+#             */
/*   Updated: 2023/12/20 11:47:03 by iscourr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	space_count(char *str)
{
	int	i;

	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	return (i);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	result;

	i = space_count((char *)str);
	sign = 1;
	result = 0;
	if (str[i] == '-')
	{
		sign *= -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		result *= 10;
		result += str[i] - '0';
		i++;
	}
	return (result * sign);
}

// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
// 	char str[] = "   -123";
// 	printf("%d\n", ft_atoi(str));
// 	printf("%d\n", atoi(str));
// 	return (0);
// }