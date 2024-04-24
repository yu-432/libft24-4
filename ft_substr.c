/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 15:03:44 by yooshima          #+#    #+#             */
/*   Updated: 2024/04/23 16:23:09 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *substr;
	unsigned int i;

	if(strlen(s) <= start || len == 0)
	{
		substr = (char *)malloc(1);
		if(substr == NULL)
			return (NULL);
		*substr = 0;
	}
	else
	{
		substr = (char *)malloc((len - start + 1) * sizeof(char));
		if(substr == NULL)
			return (NULL);
		i = 0;
		while(start + i < len)
		{
			substr[i] = s[start + i];
			i++;
		}
		substr[i] = '\0';
	}
	return (substr);
}

int main(void)
{
	char str[] = "abcdefgh";
	unsigned int set = 2;
	size_t str_len = strlen(str);
	char *value = ft_substr(str, set, strlen(str));

	printf("%s\n", value);
	free(value);
	
}