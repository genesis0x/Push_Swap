/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hahadiou <hahadiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 22:31:26 by hahadiou          #+#    #+#             */
/*   Updated: 2023/03/15 15:02:31 by hahadiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*in_dst;
	unsigned char	*in_src;

	if (!dst && !src)
		return (NULL);
	in_dst = (unsigned char *)dst;
	in_src = (unsigned char *)src;
	while (n-- > 0)
		*in_dst++ = *in_src++;
	return (dst);
}
