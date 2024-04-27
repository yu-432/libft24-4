/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 11:01:19 by yooshima          #+#    #+#             */
/*   Updated: 2024/04/27 11:16:44 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	len;
	size_t	i;

	len = ft_strlen(src);
	if (dstsize == 0)
		return (len);
	i = 0;
	while (i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len);
}

// int main(void)
// {
// 	char or_dest[] = "abcdef";
// 	char ft_dest[] = "abcdef";
// 	char src[] = "zzzzzzzzz";
// 	int or, ft;

// 	or = strlcpy(or_dest, src, -1);
// 	printf("or = %s\nlen = %d\n", or_dest, or);
// 	ft = ft_strlcpy(ft_dest, src, -1);
// 	printf("ft = %s\nlen = %d\n", ft_dest, ft);

// }
