/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 11:01:19 by yooshima          #+#    #+#             */
/*   Updated: 2024/05/03 11:34:12 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	src_len;
	size_t	i;

	src_len = ft_strlen(src);
	if (dstsize == 0)
		return (src_len);
	i = 0;
	while (i < dstsize - 1 && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_len);
}

// #include <string.h>
// #include <stdio.h>
// int main(void)
// {
// 	char or_dest[10] = "aaaaaaaa";
// 	char ft_dest[10] = "aaaaaaaa";
// 	char src[] = "zzzz";
// 	size_t dstsize = 10;
// 	printf("or = %lu %s\n\n", strlcpy(or_dest, src, dstsize), or_dest);
// 	for(int i = 0; i < dstsize; i++)
// 		printf("%c\n", or_dest[i]);
// 	printf("ft = %lu %s\n\n", ft_strlcpy(ft_dest, src, dstsize), ft_dest);
// 	for(int i = 0; i < dstsize; i++)
// 		printf("%c\n", ft_dest[i]);
// }
