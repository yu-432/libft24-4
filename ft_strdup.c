/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 13:44:37 by yooshima          #+#    #+#             */
/*   Updated: 2024/04/23 14:44:19 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(const char *s1)
{
	char *s_cpy;
	size_t len;

	len = strlen(s1);//change to ft_strlen
	s_cpy = (char *)malloc((len + 1) * sizeof(char));
	if(s_cpy == NULL)
		return (NULL);
	memcpy(s_cpy, s1, len +1);
	return (s_cpy);
}

int main(void)
{
	char str1[] = "abcedfghijklmn";
	char *or_ptr, *ft_ptr;
	
	or_ptr = strdup(str1);
	ft_ptr = ft_strdup(str1);
	printf("%s, %p or-> %s, %p\n", str1, str1, or_ptr, or_ptr);
	printf("%s, %p or-> %s, %p\n", str1, str1, ft_ptr, ft_ptr);
	
	free(or_ptr);
	free(ft_ptr);
	}