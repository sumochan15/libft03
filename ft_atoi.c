/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymorimot <ymorimot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 04:56:33 by ymorimot          #+#    #+#             */
/*   Updated: 2022/06/15 23:19:26 by ymorimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_is_space(char c)
{
	return (('\t' <= c && c <= '\r') || c == ' ');
}

int	ft_isdigit(int c)
{
	return ('0' <= c && c <= '9');
}

static char	*check_sign(char *u_str, int *sign)
{
	if (u_str[0] == '+')
		return (u_str + 1);
	else if (u_str[0] == '-')
	{
		*sign = -1;
		return (u_str + 1);
	}
	else
		return (u_str);
}

static int	is_overflow(long current, long next, int sign)
{
	if (0 < sign)
	{
		if (current > LONG_MAX / 10)
			return (1);
		current = current * 10;
		if (current > LONG_MAX - next)
			return (1);
		else
			return (0);
	}
	if (0 > sign)
	{
		if (current * -1 < LONG_MIN / 10)
			return (1);
		current = current * 10;
		if (current * -1 < LONG_MIN + next)
			return (1);
		else
			return (0);
	}
	return (0);
}

int	ft_atoi(const char *str)
{
	char	*u_str;
	int		sign;
	long	atoi_num;

	u_str = (char *)str;
	while (ft_is_space(*u_str))
		u_str++;
	sign = 1;
	u_str = check_sign(u_str, &sign);
	atoi_num = 0;
	while (ft_isdigit(*u_str))
	{
		if (is_overflow(atoi_num, *u_str - '0', sign))
		{
			if (sign > 0)
				return ((int)LONG_MAX);
			else
				return ((int)LONG_MIN);
		}
		atoi_num = atoi_num * 10 + (*u_str - '0');
		u_str++;
	}
	return ((int)(atoi_num * sign));
}

/*
#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	const char	*str = "222222222a333";
	int			test1;
	int			test2;

	test1 = ft_atoi(str);
	test2 = atoi(str);
	printf("%-10s | %-d\n", "ft_atoi", test1);
	printf("%-10s | %-d\n", "atoi", test2);
}
*/