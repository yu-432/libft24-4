/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 19:21:31 by yooshima          #+#    #+#             */
/*   Updated: 2024/04/24 14:43:23 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	if (count == 0 || size == 0)
		return (NULL);
	ptr = (void *)malloc(count * size);
	if (ptr == NULL)
		return (NULL);
	ft_memset(ptr, 0, count * size);
	return (ptr);
}

// int main(void)
// {
// 	int *test1;
// 	int *test2;
// 	int *test3;
// 	int count = 0;
// 	test1 = (int *)malloc(sizeof(int) * count);
// 	test2 = (int *)calloc(count, sizeof(int));
// 	test3 = (int *)ft_calloc(count, sizeof(int));
// 	printf("test1 = ");	
// 	for(int i = 0; i < count; i++)
// 		printf("%d ",test1[i]);
// 	printf("%p", test1);
// 	test2[2] = 123456789;
// 	printf("\ntest2 = ");	
// 	for(int i = 0; i < count; i++)
// 		printf("%d ",test2[i]);
// 	printf("%p", test2);
// 	printf("\ntest3 = ");	
// 	for(int i = 0; i < count; i++)
// 		printf("%d ",test3[i]);
// 	free(test1);
// 	free(test2);
// 	free(test3);
// }
