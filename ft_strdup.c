/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymorimot <ymorimot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 07:17:42 by ymorimot          #+#    #+#             */
/*   Updated: 2022/06/12 04:24:08 by ymorimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	void	*dup_s1;
	size_t	len;

	len = ft_strlen(s1);
	if (len > SIZE_MAX - 1)
		return (NULL);
	dup_s1 = (char *)malloc(sizeof(char) * (len + 1));
	if (!dup_s1)
		return (NULL);
	ft_strlcpy(dup_s1, s1, len + 1);
	return (dup_s1);
}

/*
#include <stdio.h>
#include <string.h> 

int main(void)
{
	char	*s1 = NULL;
	// char	*s1 = "abcda1234";
	// char *answer1 = ft_strdup(s1);
	// printf("%-10s | %s\n", "ft_strdup", answer1);

	char *answer2 = strdup(s1);
	printf("%-10s | %s\n", "libc", answer2);
}
*/