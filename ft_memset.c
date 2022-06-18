/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymorimot <ymorimot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 17:35:45 by ymorimot          #+#    #+#             */
/*   Updated: 2022/06/12 04:43:12 by ymorimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*us_b;
	unsigned char	us_c;
	size_t			i;

	us_b = (unsigned char *)b;
	us_c = (unsigned char)c;
	i = 0;
	while (i < len)
	{
		us_b[i] = us_c;
		i++;
	}
	return (us_b);
}
