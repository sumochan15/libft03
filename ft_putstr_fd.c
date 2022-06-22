/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymorimot <ymorimot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 17:36:25 by ymorimot          #+#    #+#             */
/*   Updated: 2022/06/22 11:14:59 by ymorimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s || fd < 0)
		return ;
	size_t	len;
	len = ft_strlen(s);
	while(len > INT_MAX)
	{
		write(fd, s, INT_MAX);
		len -= INT_MAX;
		s += INT_MAX;
	}
	write(fd, s, len);
}

/*
#include<stdio.h>

int main()
{
	int	fd = 1;
	char s[]="AbcdefG";

	write(1, s, ft_strlen(s));
	ft_putchar_fd('\n',fd);
	ft_putstr_fd(s,fd);
	ft_putchar_fd('\n',fd);
	return (0);
}
*/