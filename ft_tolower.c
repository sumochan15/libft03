/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymorimot <ymorimot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 23:14:00 by ymorimot          #+#    #+#             */
/*   Updated: 2022/06/01 13:05:40 by ymorimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if ('A' <= c && c <= 'Z')
		return (c + ('a' - 'A'));
	return (c);
}

/*
#include <stdio.h>
#include <ctype.h>

int main(void)
{
	int	c = 'Y';
	printf ("ft_toupper : %c\n", (char)ft_tolower(c));
	printf ("libc : %c\n", (char)tolower(c));
}
*/