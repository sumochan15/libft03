/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymorimot <ymorimot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 05:25:27 by ymorimot          #+#    #+#             */
/*   Updated: 2022/06/01 18:37:26 by ymorimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len_s;

	len_s = ft_strlen(s) + 1;
	while (len_s > 0)
	{
		if (s[len_s - 1] == (char)c)
			return ((char *)&s[len_s - 1]);
		len_s--;
	}
	return (NULL);
}

/*
#include <stdio.h>

int main(void)
{
	// const char *s = "\0";
	const char *s = "abc123	hoge345";
	int	c = '\0';
	char	*test1 = ft_strrchr(s, c);
	char	*test2 = strrchr(s, c);

	printf ("strrchr : %s\n", test1);
	printf ("libc : %s\n", test2);
}
*/