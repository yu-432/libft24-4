/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 13:16:33 by yooshima          #+#    #+#             */
/*   Updated: 2024/04/26 15:36:11 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*result;
	int				len;
	unsigned int	i;

	len = ft_strlen(s);
	result = (char *)malloc((len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	i = 0;
	while (s[i])
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}

// char	f(unsigned int i, char c)
// {
//	if (i % 2 ==0)
// 		return (c + 1);
// }

// int main(void)
// {
// 	char str[] = "abcdefg";
// 	printf("%s = %s\n", str, ft_strmapi(str, f));

// }




// char plus_one(unsigned int i, char c){
// 	return c + 1;
// }

// int main(){
// 	char * str = "1234";
// 	for i in str
// 		i = plus_one(i);

// }