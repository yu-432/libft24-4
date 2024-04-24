/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 12:37:07 by yooshima          #+#    #+#             */
/*   Updated: 2024/04/22 14:41:56 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	while(i < len)
	{
		j = 0;
		if(haystack[i] == needle[j])
		{
			j++;
			while(j < len)
			{
				if(haystack[i + j] == needle[j])
					j++;
				else
					break;
			}
			if(j == strlen(needle))//Change to [ft_strlen]
				return ((char *)haystack + i);
		}
		i++;
	}
	return (NULL);
}

int main(void)
{
	char str1[12] = "HelloWorld";
	char str2[] = "Hello";
	size_t len = 3;
	
	printf("or = %s\n%p\n", strnstr(str1, str2, len), strnstr(str1, str2, len));
	printf("ft = %s\n%p\n", ft_strnstr(str1, str2, len), ft_strnstr(str1, str2, len));
}