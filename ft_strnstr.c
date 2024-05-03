/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 12:37:07 by yooshima          #+#    #+#             */
/*   Updated: 2024/05/03 11:34:54 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (*needle == '\0')
		return ((char *)haystack);
	i = 0;
	if (i < len)
	{
		while (haystack[i])
		{
			j = 0;
			while (i + j < len && haystack[i + j] == needle[j] && needle[j])
				j++;
			if (j == ft_strlen(needle))
				return ((char *)haystack + i);
			i++;
		}
	}
	return (NULL);
}

// #include <string.h>
// #include <stdio.h>
// int main(void)
// {
// 	char str1[12] = "HelloWorld";
// 	char str2[] = "lo";
// 	size_t len = 15;
// 	printf("\n%s\n", str2);
// 	printf("or = %s\n", strnstr(str1, str2, len));
// 	printf("ft = %s\n", ft_strnstr(str1, str2, len));
// 	char str3[] = "Hello";
// 	printf("\n%s\n", str3);

// 	printf("or = %s\n", strnstr(str1, str3, len));
// 	printf("ft = %s\n", ft_strnstr(str1, str3, len));
// 	char str4[] = "World";
// 	printf("\n%s\n", str4);

// 	printf("or = %s\n", strnstr(str1, str4, len));
// 	printf("ft = %s\n", ft_strnstr(str1, str4, len));
// 	char str5[] = "HelloWorld";
// 	printf("\n%s\n", str5);

// 	printf("or = %s\n", strnstr(str5, str5, len));
// 	printf("ft = %s\n", ft_strnstr(str5, str5, len));

// 	printf("\\0\n");
// 	printf("or = %s\n", strnstr(str1, "\0", len));
// 	printf("ft = %s\n", ft_strnstr(str1, "\0", len));

// 	// printf("i = %zu j = %zu needle = %zu\n", i, j, ft_strlen(needle));

// 	printf("NULL__\n");
// 	printf("or = %s\n", strnstr(NULL, "H", len));
// 	printf("ft = %s\n", ft_strnstr(NULL, "H", len));
// }