/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymorimot <ymorimot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 07:47:15 by ymorimot          #+#    #+#             */
/*   Updated: 2022/06/07 17:56:29 by ymorimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*answer;
	size_t	i;

	if (!s || !f)
		return (NULL);
	answer = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (answer == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		answer[i] = f((unsigned int)i, s[i]);
		i++;
	}
	answer[i] = '\0';
	return (answer);
}
