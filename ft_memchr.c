/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 17:29:05 by yooshima          #+#    #+#             */
/*   Updated: 2024/05/03 11:33:30 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	while (n--)
	{
		if (*str == (unsigned char)c)
			return ((void *)str);
		str++;
	}
	return (0);
}

//#include <stdio.h>
// int main(void)
// {
// 	char s1[] = "543345";
// 	int c = '3';
// 	size_t len = 6;
// 	printf("or = %p\n%s\n", memchr(s1, c, len), (char *)memchr(s1, c, len));
// 	printf("ft = %p\n%s\n", ft_memchr(s1, c, len),
//	(char *)ft_memchr(s1, c, len));
// }