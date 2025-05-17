/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwarz <bschwarz@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 17:10:56 by bschwarz          #+#    #+#             */
/*   Updated: 2025/05/17 12:52:02 by bschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t len, size_t size)
{
	void	*ptr;
	size_t	total;

	if (len == 0 || size == 0)
		return (malloc(0));
	total = len * size;
	if (total / len != size)
		return (NULL);
	ptr = malloc(total);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, total);
	return (ptr);
}

/* #include <stdio.h>
#include <stdlib.h>

int main() 
{
	int *ptr = (int *)calloc(5, 5);
	printf("%d", ptr[3]);
	free(ptr);
	return (0);
} */