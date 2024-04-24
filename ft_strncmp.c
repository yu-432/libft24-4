/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 16:25:51 by yooshima          #+#    #+#             */
/*   Updated: 2024/04/19 14:42:27 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char *str1;
	unsigned char *str2;
	
	str1 = s1;
	str2 = s2;
	while((*str1 || *str2) && n)
	{
		if(*str1 - *str2 != 0)
			return (*str1 - *str2);
		str1++;
		str2++;
		n--;
	}
	return (0);
}

int main(void)
{
	char s1[] = "a\0bcdef";
	char s2[] = "a\200bc";
	size_t size = 5;

	printf("or = %s, %s, %d\n", s1, s2, strncmp(s1, s2, size));
	printf("ft = %s, %s, %d\n", s1, s2, ft_strncmp(s1, s2, size));
}