/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymorimot <ymorimot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 05:29:21 by ymorimot          #+#    #+#             */
/*   Updated: 2022/06/15 23:45:04 by ymorimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_arry(char const *s, char c)
{
	size_t	i;
	size_t	arry_nums;
	size_t	flag;

	i = 0;
	arry_nums = 0;
	flag = 1;
	while (s[i] != '\0')
	{
		if (flag == 1 && s[i] != c)
		{
			arry_nums++;
			flag = 0;
		}
		if (s[i] == c)
			flag = 1;
		i++;
	}
	return (arry_nums);
}

static void	next_arry(char const *s, char c, size_t *start_i, size_t *str_len)
{
	size_t	i;

	i = *start_i;
	while (s[i] != '\0')
	{
		if (s[i] != c)
			break ;
		i++;
	}
	*start_i = i;
	*str_len = 0;
	while (s[i] != c && s[i] != '\0')
		i++;
	*str_len = i - *start_i;
}

static char	**free_all(char **arry)
{
	size_t	j;

	j = 0;
	while (arry[j])
	{
		free(arry[j]);
		arry[j] = NULL;
		j++;
	}
	free(arry);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**split_arry;
	size_t	start_i;
	size_t	str_len;
	size_t	i;

	if (!s)
		return (NULL);
	split_arry = (char **)malloc(sizeof(char *) * (count_arry(s, c) + 1));
	if (split_arry == NULL)
		return (NULL);
	start_i = 0;
	str_len = 0;
	i = 0;
	while (i < count_arry(s, c))
	{
		next_arry(s, c, &start_i, &str_len);
		split_arry[i] = (char *)malloc(sizeof(char) * (str_len + 1));
		if (split_arry[i] == NULL)
			return (free_all(split_arry));
		ft_strlcpy(split_arry[i], &s[start_i], str_len + 1);
		start_i += str_len;
		i++;
	}
	split_arry[i] = NULL;
	return (split_arry);
}

/*
#include <stdio.h>
int main(void)
{
	char const *s = "11aesbc1def11YXZ1gyuj1";
	char c = '1';
	char **answer;
	size_t	i = 0;

	answer = ft_split(s, c);
	while (i < 5 && answer != NULL)
	{
		printf("%s\n",*(answer + i));
		i++;
	}
}
*/