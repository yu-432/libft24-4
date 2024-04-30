/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 11:01:19 by yooshima          #+#    #+#             */
/*   Updated: 2024/04/30 17:49:17 by yooshima         ###   ########.fr       */
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

int main(void)
{
	char or_dest[] = "";
	char ft_dest[] = "";
	char src[] = "zzzzzzzzz";

	size_t len = 6;
	printf("or = %lu %s\n\n", strlcpy(or_dest, src, len), or_dest);
	printf("ft = %lu %s\n\n", ft_strlcpy(ft_dest, src, len), ft_dest);

}
