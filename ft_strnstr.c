/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymorimot <ymorimot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 10:39:33 by ymorimot          #+#    #+#             */
/*   Updated: 2022/06/10 00:18:51 by ymorimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	needle_len;

	needle_len = ft_strlen(needle);
	if (needle_len == 0)
		return ((char *)&haystack[0]);
	i = 0;
	while (i < len && haystack[i] != '\0')
	{
		if (needle_len > len - i)
			break ;
		if (ft_strncmp(&haystack[i], needle, needle_len) == 0)
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}

/*
#include <stdio.h>
#include <string.h>
int main(void)
{
	const char	*haystack = NULL;
	const char	*needle = "4566";
	size_t		len = 3;
	// const char	*haystack = "123456678abd";
	// const char	*needle = "5667";
	// size_t		len = 10;
	
	char *test1 = ft_strnstr(haystack, needle, len);
	printf("%-13s | %-10s\n", "ft_strnstr", test1);

	char *test2 = strnstr(haystack, needle, len);
	printf("%-13s | %-10s\n", "libc_strnstr", test2);
}
*/
