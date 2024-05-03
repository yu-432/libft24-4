/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 18:23:26 by yooshima          #+#    #+#             */
/*   Updated: 2024/05/03 14:21:44 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strndup(const char *s1, int len)
{
	char	*s_cpy;

	s_cpy = (char *)malloc((len + 1) * sizeof(char));
	if (s_cpy == NULL)
		return (NULL);
	if (len > 0)
		ft_memcpy(s_cpy, s1, len);
	s_cpy[len] = '\0';
	return (s_cpy);
}

static int	count_words(const char *s, char c)
{
	int	flag;
	int	count;

	flag = 1;
	count = 0;
	while (*s)
	{
		if (*s == c)
			flag = 1;
		else if (flag == 1)
		{
			count++;
			flag = 0;
		}
		s++;
	}
	return (count);
}

static int	word_len(const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != c && s[i])
		i++;
	return (i);
}

static char	**all_free(char **result, int index)
{
	while (index--)
		free(result[index]);
	free(result);
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		index;
	int		i;

	if (!s)
		return (NULL);
	result = (char **)malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	index = 0;
	i = 0;
	while (index < count_words(s, c))
	{
		if (s[i] == c)
			i++;
		else
		{
			result[index++] = ft_strndup(&s[i], word_len(s + i, c));
			if (result[index - 1] == NULL)
				return (all_free(result, index));
			i += word_len(s + i, c);
		}
	}
	result[index] = NULL;
	return (result);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char *s = "hello,world,42,tokyo";
// 	char *t = ",,,hello,,,world,,,42,,,tokyo,,,,";
// 	char *r = "hello,world,42,tokyo";
// 	char c = ',';
// 	char c1 = ' ';
// 	char **res;

// 	res = ft_split(s, c);
// 	printf("%d\n", count_words(s, c));
// 	for (int i = 0; i < count_words(s, c) + 1; i++)
// 		printf("%s\n", res[i]);

// 	res = ft_split(t, c);
// 	for (int i = 0; i < count_words(t, c) + 1; i++)
// 		printf("%s\n", res[i]);

// 	res = ft_split(r, c1);
// 	for (int i = 0; i < count_words(r, c1) + 1; i++)
// 		printf("%s\n", res[i]);

// 	res = ft_split("\0aa\0bbb", '\0');
// 	for (int i = 0; i < count_words(r, c1) + 1; i++)
// 		printf("%s\n", res[i]);

// }