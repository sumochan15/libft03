/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymorimot <ymorimot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 02:04:18 by ymorimot          #+#    #+#             */
/*   Updated: 2022/06/14 15:16:28 by ymorimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)

{
	size_t	len_d;
	size_t	len_s;
	size_t	n;

	len_s = ft_strlen(src);
	if (dstsize == 0)
		return (len_s);
	len_d = ft_strlen(dst);
	n = 0;
	if (dstsize <= len_d)
		return (len_s + dstsize);
	while (len_d + n + 1 < dstsize && src[n] != '\0')
	{
		dst[len_d + n] = src[n];
		n++;
	}
	dst[len_d + n] = '\0';
	return (len_d + len_s);
}

/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	char dst_test[200] = "Hello";
	// char dst_test[20];
	char *src_test = "world";
	size_t	test_dstsize;
	size_t	answer1;
	size_t	answer2;

	test_dstsize = 220;

	// printf("%zu\n", ft_strlen(dst_test));
	// printf("%zu\n", strlen(dst_test));
	// answer1 = ft_strlcat(dst_test, src_test, test_dstsize);
	// printf("%s\n", dst_test);
	// printf("%zu\n", answer1);
	
	answer2 = strlcat(dst_test, src_test, test_dstsize);
	printf("%s\n", dst_test);
	printf("%zu\n", answer2);
}
*/