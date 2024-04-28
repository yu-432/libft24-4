/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 16:38:52 by yooshima          #+#    #+#             */
/*   Updated: 2024/04/28 17:38:23 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "libft.h"

int	char_mach_head(char *s, int c)
{
	while (*s)
	{
		if (*s == c)
			return (1);
		s++;
	}
	return (0);
}

int	char_mach_end(char *s, int c)
{
	int	len;

	len = ft_strlen(s);
	while (len--)
		if (s[len] == c)
			return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		head;
	int		end;
	char	*value;

	head = 0;
	while (char_mach_head((char *)set, s1[head]))
		head++;
	end = strlen(s1);
	while (char_mach_end((char *)set, s1[end - 1]))
		end--;
	value = (char *)malloc((end - head + 1) * sizeof(char));
	if (value == NULL)
		return (NULL);
	ft_memcpy(value, s1 + head, end - head);
	value[end - head] = '\0';
	return (value);
}

// int main(void)
// {
// 	char str[] = "Hello World";
// 	char trim[] = "World";
// 	printf("%s\n", ft_strtrim(str, trim));
// }