/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hahadiou <hahadiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 17:33:01 by hahadiou          #+#    #+#             */
/*   Updated: 2023/03/07 00:22:35 by hahadiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

# include <stdlib.h>
# include <unistd.h>
#include <stdio.h>
#include <string.h>

char	**ft_split(char *s, int i, int j);
void	ft_puts(char *s);
int		ft_atoi(char *s, int i, int nbr, int sign);
int		ft_strlen(char **av);
char	*ft_strjoin(char const *s1, char const *s2);

#endif
