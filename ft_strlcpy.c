/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymorimot <ymorimot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 21:36:03 by ymorimot          #+#    #+#             */
/*   Updated: 2022/06/10 18:15:38 by ymorimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	str_len;
	size_t	i;

	str_len = ft_strlen(src);
	i = 0;
	if (src != NULL && dstsize != 0)
	{
		while (src[i] && i < dstsize - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (str_len);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	// char 	*test_dst;
	char 	test_dst[4];
	char	*test_src;
	size_t	test_size;
	size_t	answer;
	
	// test_dst = "abc9555587";
	test_src = "opq";
	test_size = 15;
	answer = ft_strlcpy(test_dst, test_src, test_size);
	// answer = ft_strlcpy(test_dst, test_src, test_size);
	// answer = ft_strlcpy(test_dst, "abc987", test_size);
	// answer = ft_strlcpy("abc987", test_src, 6);
	printf("%s\n", test_dst);
	printf("%zu\n", answer);
	return (answer);
}
*/