/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 18:41:09 by yooshima          #+#    #+#             */
/*   Updated: 2024/05/03 11:22:52 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned long	i;
	char			*str1;
	char			*str2;

	str1 = dest;
	str2 = (char *)src;
	if (str1 == NULL && str2 == NULL)
		return (NULL);
	if (dest > src)
		while (len--)
			str1[len] = str2[len];
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

// #include <string.h>
// #include <stdio.h>
// int main(void)
// {
// 	size_t n = 4;
// 	char or_dest[] = "abcdef";
// 	char or_src[] = "bbbbbbbb";
// 	printf("or_dest = %s\n", memmove(or_dest + 2, or_dest, n));
// 	char ft_dest[] = "abcdef";
// 	char ft_src[] = "123456";
// 	printf("ft_dest = %s\n", ft_memmove(ft_dest + 2, ft_dest, n));
// }