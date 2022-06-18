/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymorimot <ymorimot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 06:36:44 by ymorimot          #+#    #+#             */
/*   Updated: 2022/06/11 01:34:43 by ymorimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total_size;
	void	*res;

	if (size == 0 || count == 0)
	{
		size = 1;
		count = 1;
	}
	total_size = size * count;
	if (count > SIZE_MAX / size)
		return (NULL);
	res = malloc(total_size);
	if (res == NULL)
		return (NULL);
	ft_bzero(res, total_size);
	return (res);
}
