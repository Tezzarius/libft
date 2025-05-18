/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwarz <bschwarz@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 16:36:27 by bschwarz          #+#    #+#             */
/*   Updated: 2025/05/18 18:46:38 by bschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *) s;
	while (n > 0)
	{
		p[n - 1] = (unsigned char) c;
		n--;
	}
	return (s);
}

/* #include <stdio.h>
#include <string.h>

int main()
{
	char	str[10] = "Test";
	char	str2[10] = "Test";

	ft_memset(str, '*', 5);
	printf("FT: %s\n", str);
	memset(str2, '*', 5);
	printf("OG: %s\n", str2);
	return (0);
} */