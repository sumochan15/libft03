/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymorimot <ymorimot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 10:23:26 by ymorimot          #+#    #+#             */
/*   Updated: 2022/06/11 02:03:45 by ymorimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (*str)
	{
		str++;
		len++;
	}
	return (len);
}

// #include <stdio.h>
// #include <string.h>
// int main (void)
// {
// 	size_t len;
// 	size_t len2;
// 	// const char	str[10] = "";
// 	const char	*str = NULL;

// 	// len = ft_strlen(str);
// 	len2 = strlen(str);
// 	// printf("%zu\n", len);
// 	printf("%zu\n", len2);
// }