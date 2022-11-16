/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnachit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 01:31:03 by mnachit           #+#    #+#             */
/*   Updated: 2021/12/02 21:33:41 by mnachit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	count;
	size_t	i;
	int		needle_len;

	count = 0;
	needle_len = ft_strlen (needle);
	if (!needle || needle_len == 0)
		return ((char *)haystack);
	while (haystack[count] && count < len)
	{
		i = 0;
		while (haystack[count + i] == needle[i] && count + i < len)
		{
			i++;
			if (needle[i] == '\0')
				return (&((char *)haystack)[count]);
		}
		count ++;
	}
	return (0);
}
