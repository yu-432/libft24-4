/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 18:23:26 by yooshima          #+#    #+#             */
/*   Updated: 2024/04/25 19:31:00 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

static int	count_index(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == c)
			count++;
		i++;
	}
	return (count + 1);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		i;
	int		start;
	int		index;

	result = (char **)malloc((count_index(s, c)) * sizeof(char *));
	if (result == NULL)
		return (NULL);
	i = 0;
	start = 0;
	index = 0;
	while (index < (count_index(s, c) + 1))
	{
		if (s[i] == c || s[i] == '\0')
		{
			result[index++] = ft_substr(s, start, i);
			start = i + 1;
		}
		i++;
	}
	result[index++] = ft_substr(NULL, 0, 1);
	return (result);
}

int	main(void)
{
	char *s = "Hello,World,Foo,,Bar";
	char c = ',';
	char **res;

	res = ft_split(s, c);
	for (int i = 0; i < count_index(s, c) + 1; i++)
		printf("%s\n", res[i]);
}
//strchr