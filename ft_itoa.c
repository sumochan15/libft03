/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymorimot <ymorimot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 12:59:50 by ymorimot          #+#    #+#             */
/*   Updated: 2022/06/16 00:24:27 by ymorimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digits_str(int n)
{
	int	digits_str;

	digits_str = 0;
	while (n != 0)
	{
		n /= 10;
		digits_str++;
	}
	return (digits_str);
}

static int	culculate_tenpower(int digits_str)
{
	int	tenpower;

	tenpower = 1;
	while (digits_str-- > 1)
		tenpower *= 10;
	return (tenpower);
}

static char	*convert_char(int digits_str, char *c, unsigned int us_n, int n)
{
	int	index;
	int	single;
	int	tenpower;

	index = 0;
	if (n < 0)
	{
		c[index++] = '-';
		digits_str--;
	}
	while (digits_str > 0)
	{
		tenpower = culculate_tenpower(digits_str--);
		single = us_n / tenpower;
		c[index++] = single + '0';
		us_n %= tenpower;
	}
	c[index] = '\0';
	return (c);
}

char	*ft_itoa(int n)
{
	int				digits_str;
	char			*c;
	unsigned int	us_n;

	digits_str = count_digits_str(n) + (n <= 0);
	c = (char *)malloc(sizeof(char) * (digits_str + 1));
	if (c == NULL)
		return (NULL);
	if (n < 0)
		us_n = n * (-1);
	else
		us_n = n;
	convert_char(digits_str, c, us_n, n);
	return (c);
}

/*
#include <stdio.h>
int main(void)
{
	int	n = INT_MIN;
	// int	n = -1234;
	char *answer1 = ft_itoa(n);

	printf("%s\n", answer1);
}
*/