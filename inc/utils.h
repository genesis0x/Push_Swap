/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hahadiou <hahadiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 17:33:01 by hahadiou          #+#    #+#             */
/*   Updated: 2023/03/14 23:26:11 by hahadiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

# include <stdlib.h>
# include <unistd.h>
#include <limits.h>

# ifdef BUFFER_SIZE
#  if BUFFER_SIZE < 0
#   undef BUFFER_SIZE
#   define BUFFER_SIZE 0
#  endif
# endif

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

typedef struct s_buffer t_line;
typedef struct s_buffer t_read;

struct s_buffer
{
	char			*buf;
	size_t			pos;
	size_t			size;
};

char	**ft_split(char *s, int i, int j);
void	ft_puts(char *s);
int		ft_atoi(char *s, int i, long nbr, int sign);
int     ft_stack_size(char **av);
char	*ft_strjoin(char *s1, char *s2);
void	ft_free(char **t);
void	*ft_memcpy(void *dst, const void *src, size_t n);
char	*get_next_line(int fd);

#endif
