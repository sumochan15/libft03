/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymorimot <ymorimot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 16:04:41 by ymorimot          #+#    #+#             */
/*   Updated: 2022/06/12 04:32:41 by ymorimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	s1_len;
	char	*str;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup((char *)s1));
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	s1_len = ft_strlen(s1);
	while (s1_len && ft_strchr(set, s1[s1_len - 1]))
		s1_len--;
	str = ft_substr((char *)s1, 0, s1_len);
	return (str);
}

/*
#include <stdio.h>

int main(void)
{
	char *test;
	char *test_set;
	char *answer;

	test = "abcdefgabc123abc";
	// test = NULL;
	test_set = "cba";
	answer = ft_strtrim(test, test_set);
	
	printf("%s\n", answer);
}
*/