/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 16:43:05 by yooshima          #+#    #+#             */
/*   Updated: 2024/04/24 14:51:57 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;

	str = (char *)s;
	while (*str)
		str++;
	while (1)
	{
		if (*str == c)
			return (str);
		if (str == s)
			break ;
		str--;
	}
	return (NULL);
}

// int main(void)
// {
// 	char str1[] = "abcdefcg";
// 	int find = 'c';

// 	printf("%s\n", strrchr(str1, find));
// 	printf("%s\n", ft_strrchr(str1, find));

// }