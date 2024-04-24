/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 12:39:11 by yooshima          #+#    #+#             */
/*   Updated: 2024/04/24 14:48:08 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	int		j;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dst_len >= dstsize - 1)
		return (dst_len + src_len);
	j = 0;
	while ((dst_len + j) < dstsize - 1)
	{
		dst[dst_len + j] = src[j];
		j++;
		if (src[j] == '\0')
			break ;
	}
	dst[dst_len + j] = '\0';
	return (dst_len + src_len);
}
