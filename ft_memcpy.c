/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 14:48:21 by yooshima          #+#    #+#             */
/*   Updated: 2024/04/30 16:56:15 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char			*str1;
	char			*str2;
	unsigned long	i;

	str1 = dest;
	str2 = (char *)src;
	if (str1 == NULL && str2 == NULL)
		return (NULL);
	i = 0;
	while (i < n)
	{
		str1[i] = str2[i];
		i++;
	}
	return (dest);
}

// int main(void)
// {
// 	char or_dest[] = "aaaA";
// 	char or_src[] = "bbbb";
// 	char ft_dest[] = "aaaA";
// 	char ft_src[] = "bbbb";
// 	int n = 3;
// 	printf("or = %s\n", or_dest);
// 	printf("or = %s\n", memcpy(NULL, or_src, n));
// 	printf("ft = %s\n", ft_dest);
// 	printf("ft = %s\n", ft_memcpy(NULL, ft_src, n));

// }