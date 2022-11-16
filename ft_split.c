/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnachit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 17:21:32 by mnachit           #+#    #+#             */
/*   Updated: 2021/12/03 17:50:56 by mnachit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**free_table(int index, char **tab)
{
	while (index-- >= 0)
		free(tab[index]);
	free(tab);
	return (NULL);
}

static int	hisab_mots(const char *str, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (str[i] != '\0')
	{
		if ((str[i] != c) && (str[i + 1] == c || str[i + 1] == '\0'))
			words++;
		i++;
	}
	return (words);
}

static int	hisab_length(const char *str, char c)
{
	int	len;

	len = 0;
	while (str[len] != c && str[len] != '\0' )
		len++;
	return (len);
}

static char	**add_to_table(const char *s, int c, int words, char **arr)
{
	int	i;
	int	j;
	int	len;
	int indix;

	i = 0;
	j = 0;
	while (i < words)
	{
		while (s[index] = c)

		len = hisab_length(s, c);
		arr[i] = (char *)malloc((len) * sizeof(char) + 1);
		if (arr == NULL)
			return (free_table(i, arr));
		indix = 0;
		while (j < len)
			arr[i][j++] = s[indix++];
		arr[i][j] = '\0';
		i++;
	}
	arr[i] = NULL;
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		nb_words;
	char	**res;

	if (s == NULL)
		return (NULL);
	i = 0;
	nb_words = hisab_mots(s, c);
	res = (char **)malloc((nb_words) * sizeof(char *) + 1);
	if (res == NULL)
		return (NULL);
	add_to_table(s, c, nb_words, res);
	return (res);
}
#include <stdio.h>
int main()
{
	int i = 0;
	char **test = ft_split("Hello World", 'W');
	while(test[i])
	{
		printf("%s", test[i]);
		i++;
	}
	return 0;
}
