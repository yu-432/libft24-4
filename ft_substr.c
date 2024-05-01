/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 15:03:44 by yooshima          #+#    #+#             */
/*   Updated: 2024/05/01 15:39:28 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*substr;
	unsigned int	i;

	if (!s)
		return (NULL);
	else if (ft_strlen(s) <= start || len == 0)
	{
		substr = (char *)malloc(1);
		if (substr == NULL)
			return (NULL);
		*substr = 0;
		return (substr);
	}
	substr = (char *)malloc((len + 1) * sizeof(char));
	if (substr == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}

// int main(void)
// {
// 	char str[] = "Hello-42-Tokyo";
// 	unsigned int set = 2;
// 	size_t str_len = strlen(str);
// 	char *value = ft_substr(str, 15, 5);
// 	printf("%s\n", value);
// 	free(value);
// }