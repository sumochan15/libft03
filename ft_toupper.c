/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymorimot <ymorimot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 23:01:05 by ymorimot          #+#    #+#             */
/*   Updated: 2022/06/01 13:02:31 by ymorimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if ('a' <= c && c <= 'z')
		return (c - ('a' - 'A'));
	return (c);
}

/*
#include <stdio.h>
#include <ctype.h>

int main(void)
{
	int	c = '\0';
	printf ("ft_toupper : %c\n", (char)ft_toupper(c));
	printf ("libc : %c\n", (char)toupper(c));
}
*/