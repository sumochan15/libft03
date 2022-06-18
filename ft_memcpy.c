/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymorimot <ymorimot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 03:50:48 by ymorimot          #+#    #+#             */
/*   Updated: 2022/06/15 23:32:01 by ymorimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*us_dst;
	unsigned char	*us_src;
	size_t			len;

	if (!dst && !src)
		return (NULL);
	len = 0;
	us_dst = (unsigned char *)dst;
	us_src = (unsigned char *)src;
	while (len < n)
	{
		us_dst[len] = us_src[len];
		len++;
	}
	return (us_dst);
}
