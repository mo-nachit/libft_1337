/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnachit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 21:46:07 by mnachit           #+#    #+#             */
/*   Updated: 2021/12/02 22:07:13 by mnachit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t			i;
	char			*chaine;
	unsigned int	l;

	if (!s)
		return (NULL);
	l = ft_strlen(s);
	if (start > l)
		return (ft_strdup(""));
	else if (ft_strlen(s + start) < len)
		chaine = (char *)malloc((ft_strlen(s + start) + 1) * sizeof(char));
	else
		chaine = (char *)malloc((len + 1) * sizeof(char));
	if (!chaine)
		return (NULL);
	i = 0;
	while (s[start] != '\0' && i < len && start < l)
		chaine[i++] = s[start++];
	chaine[i] = '\0';
	return (chaine);
}
