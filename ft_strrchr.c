/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwarz <bschwarz@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 12:58:08 by bschwarz          #+#    #+#             */
/*   Updated: 2025/05/18 19:46:46 by bschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i--;
	}
	if (!c)
		return ((char *)s);
	return (0);
}

/* #include <stdio.h>
#include <string.h>

int main()
{
	char str[] = "Hello World";
	char to_c = 'o';

	printf("FT: %s\n", ft_strrchr(str, to_c));
	printf("OG: %s\n", strrchr(str, to_c));
	return (0);
} */