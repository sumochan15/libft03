/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymorimot <ymorimot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 17:43:51 by ymorimot          #+#    #+#             */
/*   Updated: 2022/06/16 14:20:28 by ymorimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	void	*res;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (ft_strlen(&s[start]) < len)
		len = ft_strlen(&s[start]);
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	ft_strlcpy(res, &s[start], len + 1);
	return (res);
}

/*
#include <stdio.h>
int main (void)
{
	char 	*test;
	char 	*answer;

	// test = "Helloworld!";
	// test = NULL;
	// test = NULL;
	// answer = ft_substr(test, 19, 5);
	answer = ft_substr("tripouille", 2, SIZE_MAX);
	// answer = ft_substr(test, 0, SIZE_MAX);
	printf("%s\n", answer);
}
*/