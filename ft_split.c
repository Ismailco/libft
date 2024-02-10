/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iscourr <i_courr@hotmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 10:01:52 by iscourr           #+#    #+#             */
/*   Updated: 2024/01/08 15:18:49 by iscourr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char *s, char c)
{
	int		count;
	int		i;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (count);
}

static char	*ft_extract_word(char *s, char c, int *index)
{
	int		k;
	int		word_len;
	char	*word;

	k = 0;
	word_len = 0;
	while (s[*index + word_len] && s[*index + word_len] != c)
		word_len++;
	word = (char *)malloc(sizeof(char) * (word_len + 1));
	if (!word)
		return (NULL);
	while (s[*index] && s[*index] != c)
		word[k++] = s[(*index)++];
	word[k] = '\0';
	return (word);
}

static void	*ft_freemem(char **res, int j)
{
	while (j--)
		free(res[j]);
	free(res);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	res = (char **)malloc(sizeof(char *) * (ft_count_words((char *)s, c) + 1));
	if (!res)
		return (NULL);
	while (s[i])
	{
		if (s[i] != c)
		{
			res[j++] = ft_extract_word((char *)s, c, &i);
			if (!res[j - 1])
				return (ft_freemem(res, j));
		}
		else
			i++;
	}
	res[j] = NULL;
	return (res);
}
