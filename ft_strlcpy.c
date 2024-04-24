/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 11:01:19 by yooshima          #+#    #+#             */
/*   Updated: 2024/04/17 12:36:57 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

static size_t	ft_strlen(const char *s);

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	len;
	size_t	i;

	len = ft_strlen(src);
	i = 0;
	while (i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len);
}

static size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (*s)
	{
		i++;
		s++;
	}
	return (i);
}

int main(void)
{
	char or_dest[] = "aa";
	char or_src[] = "b";
	char ft_dest[] = "aa";
	char ft_src[] = "b";
	int or, ft;

	printf("or = %s len = %lu\n", or_dest, strlen(or_dest));
	or = strlcpy(or_dest, or_src, strlen(or_dest));
	printf("or = %s\nlen = %d\n", or_dest, or);
	
	printf("ft = %s len = %lu\n", ft_dest, ft_strlen(ft_dest));
	ft = ft_strlcpy(ft_dest, ft_src, ft_strlen(ft_dest));
	printf("ft = %s\nlen = %d\n", ft_dest, ft);
	
}