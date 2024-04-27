/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 12:39:11 by yooshima          #+#    #+#             */
/*   Updated: 2024/04/27 15:53:33 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <string.h>
#include <stdlib.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	result;
	int		j;

	src_len = ft_strlen(src);
	if (dst == NULL || dstsize == 0)
		return (src_len);
	dst_len = ft_strlen(dst);
	j = 0;
	if (dstsize > dst_len)
		result = src_len + dst_len;
	else
		result = src_len + dstsize;
	while (dst_len + j < dstsize - 1)
	{
		dst[dst_len + j] = src[j];
		j++;
		if (src[j] == '\0')
			break ;
	}
	dst[dst_len + j] = '\0';
	return (result);
}

// int main(void)
// {
// 	char or_s1[10] = "";
// 	char ft_s1[10] = "";

// 	char s2[] = "bbbbb";
// 	size_t len = 10;

// 	printf("or = %lu %s\n", strlcat(or_s1, s2, len), or_s1);
// 	printf("ft = %lu %s\n", ft_strlcat(ft_s1, s2, len), ft_s1);

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
