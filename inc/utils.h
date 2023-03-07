/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hahadiou <hahadiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 17:33:01 by hahadiou          #+#    #+#             */
/*   Updated: 2023/03/07 03:54:06 by hahadiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

# include <stdlib.h>
# include <unistd.h>

char	**ft_split(char *s, int i, int j);
void	ft_puts(char *s);
int		ft_atoi(char *s, int i, int nbr, int sign);
char	*ft_strjoin(char const *s1, char const *s2);

#endif
