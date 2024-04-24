/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 17:29:05 by yooshima          #+#    #+#             */
/*   Updated: 2024/04/24 14:44:31 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*str;

	str = s;
	while (n--)
	{
		if (*str == c)
			return ((void *)str);
		str++;
	}
	return (0);
}

// int main(void)
// {
// 	char s1[] = "543345";
// 	int c = '1';
// 	size_t len = 100000;
	
// 	printf("or = %p\n%s\n", memchr(s1, c, len), (char *)memchr(s1, c, len));
// 	printf("ft = %p\n%s\n", ft_memchr(s1, c, len), (char *)ft_memchr(s1, c, len));
// }