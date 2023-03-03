/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hahadiou <hahadiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 18:17:08 by hahadiou          #+#    #+#             */
/*   Updated: 2023/03/03 19:08:19 by hahadiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

static int	is_space(char c)
{
	return ((c == ' '));
}

static int	count_words(char *s)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (is_space(s[i]) && s[i])
			i++;
		if (!is_space(s[i]) && s[i])
			count++;
		while (!is_space(s[i]) && s[i])
			i++;
	}
	return (count);
}

static int	word_len(char *s, int i)
{
	int	len;

	len = 0;
	while (!is_space(s[i]) && s[i])
	{
		len++;
		i++;
	}
	return (len);
}

char	**ft_split(char *s, int i, int j)
{
	int		k;
	char	**res;

	res = (char **)malloc(sizeof(char *) * (count_words(s) + 1));
	if (!res || !s)
		return (NULL);
	while (s[i])
	{
		while (is_space(s[i]) && s[i])
			i++;
		if (!is_space(s[i]) && s[i])
		{
			k = 0;
			res[j] = (char *)malloc(sizeof(char) * (word_len(s, i) + 1));
			if (!res)
				return (NULL);
			while (!is_space(s[i]) && s[i])
				res[j][k++] = s[i++];
			res[j][k] = '\0';
			j++;
		}
	}
	res[j] = 0;
	return (res);
}
