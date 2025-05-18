/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwarz <bschwarz@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 10:18:54 by bschwarz          #+#    #+#             */
/*   Updated: 2025/05/18 19:05:04 by bschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void	*dest, const void *src, size_t n)
{
	int				i;
	unsigned char	*d;
	unsigned char	*s;

	if (dest == NULL && src == NULL)
		return (NULL);
	d = (unsigned char *) dest;
	s = (unsigned char *) src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;	
	}
	return (dest);
}

/* #include <stdio.h>
#include <string.h>

int	main()
{
	char	src[20] = "Tabula Rasa";
	char	dest[20] = " ";
	char	src2[20] = "Tabula Rasa";
	char	dest2[20] = " ";

	ft_memcpy(dest, src, 8);
	printf("FT: %s\n", dest);
	memcpy(dest2, src2, 8);
	printf("OG: %s\n", dest2);
	return (0);
} */