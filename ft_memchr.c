/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymorimot <ymorimot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 13:37:25 by ymorimot          #+#    #+#             */
/*   Updated: 2022/06/01 22:31:14 by ymorimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;

	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return ((void *)&str[i]);
		i++;
	}
	return (NULL);
}

/*
#include <stdio.h>

int main(void)
{
	const void	*s = "hoger123bar4569999999";
	int			c = 'h';
	size_t		n = 20;
	char		*test1 = ft_memchr(s, c, n);
	char		*test2 = memchr(s, c, n);

	printf("%-4s | %-s\n", "ft" ,test1);
	printf("%-4s | %-s\n", "libc" ,test2);
}
*/