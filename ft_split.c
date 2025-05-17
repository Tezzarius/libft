/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwarz <bschwarz@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 14:10:22 by bschwarz          #+#    #+#             */
/*   Updated: 2025/05/17 12:49:15 by bschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_checkseperator(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == c)
			count++;
		i++;
	}
	if (count > 0)
		return (1);
	return (0);
}

static void	free_array(char **arr, int count)
{
	while (--count >= 0)
		free(arr[count]);
	free(arr);
}

static int	ft_wordcount(char const *s, int c)
{
	int	count;
	int	sw;
	int	i;

	i = 0;
	sw = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && sw == 0)
		{
			count++;
			sw = 1;
		}
		else if (s[i] == c)
			sw = 0;
		i++;
	}
	return (count);
}

static int	fillarray(char **dest, char const *s, char c)
{
	int		i;
	int		j;
	int		start;

	j = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			start = i;
			while (s[i] && s[i] != c)
				i++;
			dest[j] = ft_substr(s, start, i - start);
			if (!dest[j])
				return (free_array(dest, j), 0);
			j++;
		}
		else
			i++;
	}
	dest[j] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**dest;

	if (!s)
		return (NULL);
	if (!ft_checkseperator(s, c))
	{
		dest = malloc(2 * sizeof(char *));
		if (!dest)
			return (NULL);
		dest[0] = ft_strdup((char *)s);
		dest[1] = NULL;
		return (dest);
	}
	dest = malloc((ft_wordcount(s, c) + 1) * sizeof(char *));
	if (!dest)
		return (NULL);
	if (!fillarray(dest, s, c))
		return (NULL);
	return (dest);
}

/* #include <stdio.h>

int main()
{
	char *string = "      split       this for   me  !       ";
	char **result = ft_split(string, '#');
	printf("%s\n", result[0]);
	printf("%s\n", result[1]);
	printf("%s\n", result[2]);
	printf("%s\n", result[3]);
	printf("%s\n", result[4]);
	printf("%s\n", result[5]);
	return (0);
} */
