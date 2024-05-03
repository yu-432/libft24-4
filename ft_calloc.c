/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 19:21:31 by yooshima          #+#    #+#             */
/*   Updated: 2024/05/03 11:29:32 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	if (count == 0 || size == 0)
	{
		ptr = (void *)malloc(1);
		if (!ptr)
			return (NULL);
	}
	else if (SIZE_MAX / size < count)
		return (NULL);
	else
	{
		ptr = (void *)malloc(count * size);
		if (ptr == NULL)
			return (NULL);
		ft_memset(ptr, 0, count * size);
	}
	return (ptr);
}

// #include <string.h>
// #include <stdio.h>
// int	main(void)
// {
// 	void	*ptr1 = calloc(0, 0);

// 	if (ptr1 == NULL)
// 		printf("calloc = NULL\n");
// 	else
// 	{
// 		printf("calloc = %p\n", ptr1);
// 		free(ptr1);
// 	}
// 	void	*ptr2 = ft_calloc(0, 0);

// 	if (ptr2 == NULL)
// 		printf("calloc = NULL\n");
// 	else
// 	{
// 		printf("ft_calloc = %p\n", ptr2);
// 		free(ptr2);
// 	}

// 	void	*ptr3 = calloc((size_t)SIZE_MAX / 10 + (size_t)1, 100);

// 	if (ptr3 == NULL)
// 		printf("calloc = NULL\n");
// 	else
// 	{
// 		printf("calloc = %p\n", ptr3);
// 		free(ptr3);
// 	}

// 	void	*ptr4 = ft_calloc(INT_MIN, INT_MIN);
// 	void	*ptr5 = calloc(INT_MIN, INT_MIN);

// printf("aft_calloc = %p\n", ptr4);
// printf("acalloc = %p\n", ptr5);
// }
