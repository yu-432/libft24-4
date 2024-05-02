/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 12:39:11 by yooshima          #+#    #+#             */
/*   Updated: 2024/05/02 13:57:28 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	src_len = ft_strlen(src);
	if (dstsize == 0)
		return (src_len);
	dst_len = ft_strlen(dst);
	i = 0;
	if (dstsize <= dst_len)
		return (src_len + dstsize);
	while (i < dstsize - dst_len - 1 && src[i])
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}

//#include <stdio.h>
//#include <string.h>
// int main(void)
// {
// 	char or_s1[10] = "aaa";
// 	char ft_s1[10] = "aaa";

// 	char s2[] = "bbbbb";
// 	size_t len = 0;

// 	printf("or = %lu %s\n", strlcat("42", NULL, len), or_s1);

// 	printf("ft = %lu %s\n", ft_strlcat("42", NULL, len), ft_s1);

// 	char *dst1 = calloc(100, sizeof(char));
// 	char *dst2 = calloc(100, sizeof(char));

// 	char *src1 = calloc(100, sizeof(char));
// 	char *src2 = calloc(100, sizeof(char));
// 	for (int i = 0; i < 99; i++)
// 	{
// 		src1[i] = i + 1;
// 		src2[i] = i + 1;
// 	}

// 	printf("or = %lu %s\n", strlcat(dst1, src1, len), dst1);
// 	printf("ft = %lu %s\n", ft_strlcat(dst2, src2, len), dst2);

// }
