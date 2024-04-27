/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 18:41:09 by yooshima          #+#    #+#             */
/*   Updated: 2024/04/26 19:13:48 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned long	i;
	char			*str1;
	char			*str2;

	str1 = dest;
	str2 = (char *)src;
	if (dest > src)
	{
		len -= 1;
		while(len >= 0)
		{
		str1[len] = str2[len];
		len--;
		}
	}
	else
	{
	i = 0;
	while (i < len)
	{
		str1[i] = str2[i];
		i++;
	}
	}
	return (dest);
}

int main(void)
{
	int n = 4;
	char or_dest[] = "abcdef";
	// char or_src[] = "bbbbbbbb";
	printf("or_dest = %s\n", memmove(or_dest + 1, or_dest, n));
	char ft_dest[] = "abcdef";
	// char ft_src[] = "bbbbbbbb";
	printf("ft_dest = %s\n", ft_memmove(ft_dest + 1, ft_dest, n));
}