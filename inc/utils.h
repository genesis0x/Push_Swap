/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hahadiou <hahadiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 17:33:01 by hahadiou          #+#    #+#             */
/*   Updated: 2023/03/14 14:47:53 by hahadiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

# include <stdlib.h>
# include <unistd.h>
#include <string.h>

char	**ft_split(char *s, int i, int j);
void	ft_puts(char *s);
int		ft_atoi(char *s, int i, int nbr, int sign);
int     ft_stack_size(char **av);
char	*ft_strjoin(char *s1, char *s2);
void	ft_free(char **t);

#endif
