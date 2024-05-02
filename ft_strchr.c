/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 14:03:57 by yooshima          #+#    #+#             */
/*   Updated: 2024/05/02 13:56:08 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;

	str = (char *)s;
	while (*str)
	{
		if (*str == (unsigned char)c)
			return (str);
		str++;
	}
	if (*str == c)
		return (str);
	return (NULL);
}

// #include <string.h>
// #include <stdio.h>
// int main(void)
// {
// 	char str1[] = "abcdefg";
// 	int find = 'c' + 256;
// 	printf("or = %s\n", strchr(str1, find));
// 	printf("ft = %s\n", ft_strchr(str1, find));
// }
