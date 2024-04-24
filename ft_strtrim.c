/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 16:38:52 by yooshima          #+#    #+#             */
/*   Updated: 2024/04/24 17:08:29 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "libft.h"

int	yoo_strhit(char *s, int c)
{
	char	*str;

	str = (char *)s;
	while (*str)
	{
		if (*str == c)
			return (1);
		str++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	head;
	size_t	end;
	char	*value;

	head = 0;
	while (yoo_strhit((char *)set, s1[head]))
		head++;
	end = strlen(s1);
	while (yoo_strhit((char *)set, s1[end - 1]))
		end--;
	value = (char *)malloc((end - head) * sizeof(char));
	if (value == NULL)
		return (NULL);
	return (value);
}

// int main(void)
// {
// 	char str[] = "abcdefabc";
// 	char trim[] = "abc";
// 	printf("%s\n", ft_strtrim(str, trim));
// }