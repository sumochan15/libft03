/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymorimot <ymorimot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 01:05:12 by ymorimot          #+#    #+#             */
/*   Updated: 2022/06/16 14:23:28 by ymorimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newstr;
	size_t	len_s1;
	size_t	len_s2;

	if (!s1 && s2)
		return (ft_strdup(s2));
	if (s1 && !s2)
		return (ft_strdup(s1));
	if (!s1 && !s2)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	if (len_s1 > SIZE_MAX - len_s2 - 1)
		return (NULL);
	newstr = (char *)malloc(sizeof(char) * (len_s1 + len_s2 + 1));
	if (!newstr)
		return (NULL);
	ft_strlcpy(newstr, s1, len_s1 + 1);
	ft_strlcat(newstr, s2, len_s1 + len_s2 + 1);
	return (newstr);
}

/*
#include <stdio.h>

int main(void)
{
	char *test_s1 = "Hello \0world!";
	// char *test_s1 = NULL;
	char *test_s2 = "I am a Hero!";
	// char *test_s2 = NULL;
	char *answer1 = ft_strjoin(test_s1, test_s2);

	printf("%s\n", answer1);
}
*/