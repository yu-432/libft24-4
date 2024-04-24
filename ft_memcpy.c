/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 14:48:21 by yooshima          #+#    #+#             */
/*   Updated: 2024/04/16 18:24:54 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memcpy(void *dest, void *src, size_t n)
{
	char	*str1;
	char	*str2;
	unsigned long	i;

	str1 = dest;
	str2 = src;
	i = 0;
	while (i < n)
	{
		str1[i] = str2[i];
		i++;
	}
	return (dest);
}

size_t	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		i++;
		str++;
	}
	return (i);
}

int main(void)
{
	char or_dest[] = "aaaA";
	char or_src[] = "bbbb";
	char ft_dest[] = "aaaA";
	char ft_src[] = "bbbb";
	int n = 4;

	printf("ft = %s\n", ft_dest);
	printf("ft = %s\n", ft_memcpy(ft_dest, ft_src, n));
	for(int i = 0; i < 15; i++)
		printf("%c", or_dest[i]);
	puts("\n");


	printf("or = %s\n", or_dest);
	printf("or = %s\n", memcpy(or_dest, or_src, n));
	for(int i = 0; i < 15; i++)
		printf("%c", ft_dest[i]);
	puts("\n");
}