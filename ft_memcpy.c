/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnachit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 11:14:06 by mnachit           #+#    #+#             */
/*   Updated: 2021/12/03 17:50:10 by mnachit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*adst;
	char	*asrc;
	size_t	i;

	i = 0;
	adst = (char *)dst;
	asrc = (char *)src;
	if (!dst && !src)
		return (NULL);
	while (n > i)
	{
		adst[i] = asrc[i];
		i++;
	}
	return (dst);
}
