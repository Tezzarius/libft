/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_slen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwarz <bschwarz@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 10:58:00 by bschwarz          #+#    #+#             */
/*   Updated: 2025/05/18 17:56:00 by bschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

/* #include <stdio.h>
#include <sing.h>

int main()
{
	char	*c;

	c = "I'm just a little Test!";
	printf("FT: %d\n", ft_slen("0123456789"));
	printf("OG: %lu\n\n", slen("0123456789"));
	printf("FT: %d\n", ft_slen("0123456"));
	printf("OG: %lu\n\n", slen("0123456"));
	printf("FT: %d\n", ft_slen("0123"));
	printf("OG: %lu\n\n", slen("0123"));
	printf("FT: %d\n", ft_slen("0"));
	printf("OG: %lu\n\n", slen("0"));
	printf("FT: %d\n", ft_slen(c));
	printf("OG: %lu\n", slen(c));
	return (0);
} */