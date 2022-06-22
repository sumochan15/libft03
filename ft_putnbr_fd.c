/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymorimot <ymorimot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 04:04:54 by ymorimot          #+#    #+#             */
/*   Updated: 2022/06/21 20:17:27 by ymorimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	us_n;

	us_n = (unsigned int)n;
	if (fd < 0)
		return ;
	if (n < 0)
	{
		us_n *= (-1);
		ft_putchar_fd('-', fd);
	}
	if (us_n > 9)
		ft_putnbr_fd(us_n / 10, fd);
	ft_putchar_fd(us_n % 10 + '0', fd);
}

/*
int main()
{
	int	n = INT_MIN;
	ft_putnbr_fd(n, 1);
	ft_putchar_fd('\n', 1);
	return (0);
}
*/