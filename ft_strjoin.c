/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 15:56:00 by yooshima          #+#    #+#             */
/*   Updated: 2024/05/02 18:01:17 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	s1_len;
	unsigned int	s2_len;
	char			*value;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	value = (char *)malloc((s1_len + s2_len + 1) * sizeof(char));
	if (value == NULL)
		return (NULL);
	ft_memcpy(value, s1, s1_len);
	ft_memcpy(value + s1_len, s2, s2_len + 1);
	return (value);
}

// #include <string.h>
// #include <stdio.h>

// int main(void)
// {
// 	char str1[] = "abcdeff";
// 	char str2[] = "ghi";

// 	printf("%s\n", ft_strjoin(str1, str2));
// }