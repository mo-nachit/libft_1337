/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnachit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 18:32:07 by mnachit           #+#    #+#             */
/*   Updated: 2021/12/03 01:48:53 by mnachit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*nachit;

	nachit = (char *)s;
	while (*nachit)
	{
		if (*nachit == (char)c)
			return (nachit);
		nachit++;
	}
	if ((char)c == '\0')
		return (nachit);
	return (NULL);
}
