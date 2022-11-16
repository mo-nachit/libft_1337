/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnachit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 17:25:41 by mnachit           #+#    #+#             */
/*   Updated: 2021/12/02 21:26:27 by mnachit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_nachit(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	size_t	start;
	size_t	finish;
	size_t	i;

	start = 0;
	if (!s1)
		return (0);
	if (!set)
		return (ft_strdup(s1));
	finish = ft_strlen(s1);
	while (s1[start] && ft_nachit(s1[start], set))
		start++;
	while (start < finish && ft_nachit(s1[finish - 1], set))
		finish--;
	i = 0;
	trim = (char *) malloc(sizeof(char) * (finish - start + 1));
	if (!trim)
		return (NULL);
	while (start < finish)
		trim[i++] = s1[start++];
	trim[i] = '\0';
	return (trim);
}
