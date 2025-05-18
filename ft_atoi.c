/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwarz <bschwarz@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 15:10:02 by bschwarz          #+#    #+#             */
/*   Updated: 2025/05/18 18:56:44 by bschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	int	i;
	int	neg;
	int	dest;

	i = 0;
	neg = 1;
	dest = 0;
	while ((nptr[i] == ' ') || (nptr[i] == '\t') || (nptr[i] == '\n')
		|| (nptr[i] == '\v') || (nptr[i] == '\f') || (nptr[i] == '\r'))
		i++;
	if ((nptr[i] == '+') || (nptr[i] == '-'))
	{
		if (nptr[i] == '-')
			neg = -1;
		i++;
	}
	while ((nptr[i] >= '0') && (nptr[i] <= '9'))
	{
		dest = dest * 10;
		dest = dest + (nptr[i] - '0');
		i++;
	}
	return (dest * neg);
}

/* #include <stdio.h>

int main()
{
	printf("FT: %d\n", ft_atoi("+345fgh"));
	printf("OG: %d\n\n", atoi("+345fgh"));
	printf("FT: %d\n", ft_atoi("  -345fgh"));
	printf("OG: %d\n\n", atoi("  -345fgh"));
	printf("FT: %d\n", ft_atoi("--345fgh"));
	printf("OG: %d\n", atoi("--345fgh"));
	return (0);
} */
