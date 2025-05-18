/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwarz <bschwarz@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 14:30:07 by bschwarz          #+#    #+#             */
/*   Updated: 2025/05/18 18:53:53 by bschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*src;
	size_t			i;

	i = 0;
	src = (unsigned char *) s;
	while (i < n)
	{
		if (src[i] == (unsigned char) c)
			return (&s[i]);
		i++;
	}
	return (0);
}

/* int main ()
{
	char *s = "/|\x12\xff\x09\0\x42\042\0\42|\\";
	int size = 12;

	ft_memchr(s, '\0', size);
	return (0);
} */
