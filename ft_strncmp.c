/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 16:25:51 by yooshima          #+#    #+#             */
/*   Updated: 2024/05/02 13:58:08 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (!s1 && !n)
		return (0);
	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}


// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
// 	char s1[] = "\0";
// 	char s2[] = " ";
// 	size_t size = 3;
// // 	printf("or = %s, %s, %d\n", s1, s2, strncmp(s1, s2, size));
// // 	printf("ft = %s, %s, %d\n", s1, s2, ft_strncmp(s1, s2, size));

// // 	printf("%d\n", strncmp("hello", NULL,  size));
// // 	printf("%d\n", ft_strncmp("hello", NULL, size));

// // 	// printf("%d\n", strncmp("hello", NULL,size));
// // 	// printf("%d\n", ft_strncmp("hello", NULL,size));
// 	printf("ft %d\n", ft_strncmp(NULL, "hello", size));

// 	printf("or %d\n", strncmp(NULL, "hello", size));

// 	// printf("ft %d\n", ft_strncmp(NULL, NULL, size));
// 	// printf("or %d\n", strncmp(NULL, NULL, size));

// // 	// ft_strncmp(NULL, NULL, 0), strncmp(NULL, NULL, 0));
// }