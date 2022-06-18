/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymorimot <ymorimot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 01:10:44 by ymorimot          #+#    #+#             */
/*   Updated: 2022/06/01 18:39:24 by ymorimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*us_s1;
	unsigned char	*us_s2;
	size_t			i;

	us_s1 = (unsigned char *)s1;
	us_s2 = (unsigned char *)s2;
	i = 0;
	while (i < n && (us_s1[i] || us_s2[i]))
	{
		if (us_s1[i] != us_s2[i])
			return (us_s1[i] - us_s2[i]);
		i++;
	}
	return (0);
}

/*
#include <string.h>
#include <stdio.h>

int main(void)
{
	char	*s1 = "hello\200"; //\+3桁"で８進数表示
	char	*s2 = "hello";

	int ret1 = ft_strncmp(s1, s2, 5);
	int ret2 = strncmp(s1, s2, 5);
	printf("ft: %d\n", ret1);
	printf("libc: %d\n", ret2);
}
*/