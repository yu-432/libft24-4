/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 16:43:05 by yooshima          #+#    #+#             */
/*   Updated: 2024/05/02 13:58:29 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;

	str = (char *)s;
	while (*str)
		str++;
	while (1)
	{
		if (*str == (unsigned char)c)
			return (str);
		if (str == s)
			break ;
		str--;
	}
	return (NULL);
}

// #include <string.h>
// #include <stdio.h>
// int main(void)
// {
// 	char str1[] = "abcdefcg";
// 	int find = 'c';

// 	printf("%s\n", strrchr(str1, find));
// 	printf("%s\n", ft_strrchr(str1, find));

// }