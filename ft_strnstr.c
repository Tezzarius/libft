/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwarz <bschwarz@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 15:04:18 by bschwarz          #+#    #+#             */
/*   Updated: 2025/05/18 18:56:04 by bschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!*little)
		return ((char *) big);
	while (i < len && big[i] != '\0')
	{
		j = 0;
		while (big[i + j] == little[j] && i + j < len && big [i + j] != '\0')
			j++;
		if (little[j] == '\0')
			return ((char *) &big[i]);
		i++;
	}
	return (0);
}

/* #include <stdio.h>

int main()
{
	char *s1 = "A";
	char *s2 = "FF";
	size_t max = strlen(s1);
	char *i2 = ft_strnstr(s1, s2, 20);
	printf("%s", i2);
	return (0);
} */