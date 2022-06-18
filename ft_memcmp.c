/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymorimot <ymorimot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 16:39:52 by ymorimot          #+#    #+#             */
/*   Updated: 2022/06/01 12:52:59 by ymorimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*u_s1;
	unsigned char	*u_s2;
	size_t			i;

	u_s1 = (unsigned char *)s1;
	u_s2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (u_s1[i] != u_s2[i])
			return (u_s1[i] - u_s2[i]);
		i++;
	}
	return (0);
}

/*
# include <stdio.h>

int main (void)
{
	const char	*s1 = "\207a5hoge123hoge123";
	// const char	*s1 = "\0";
	const char	*s2 = "\0";
	size_t	n = 10;

	printf ("ft_memcmp %d\n", ft_memcmp(s1, s2, n));
	printf ("libc %d\n", memcmp(s1, s2, n));
}
*/