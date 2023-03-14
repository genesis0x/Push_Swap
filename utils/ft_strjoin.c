/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hahadiou <hahadiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 00:20:32 by hahadiou          #+#    #+#             */
/*   Updated: 2023/03/14 21:09:39 by hahadiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

static int	ft_strlen(char const *s)
{
	int	i;

	i = -1;
	while (s[++i])
		;
	return (i);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*new;
	int		len1;
	int		len2;
	int		i;
	int		j;

	if (!s1)
	{
		s1 = (char*) malloc(1);
		s1[0] = '\0';
	}
	i = -1;
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	new = malloc(len1 + len2 + 1);
	if (!new)
		return (NULL);
	while (++i < len1)
		new[i] = s1[i];
	j = -1;
	while (++j < len2)
	{
		new[i] = s2[j];
		i++;
	}
	new[i] = '\0';
	free(s1);
    return (new);
}
