/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnachit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 12:28:32 by mnachit           #+#    #+#             */
/*   Updated: 2021/12/03 01:44:02 by mnachit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	size_src;
	size_t	dst_len;
	size_t	i;
	size_t	sum;

	size_src = ft_strlen(src);
	dst_len = ft_strlen(dst);
	sum = size_src + dst_len;
	if (dstsize - 1 < dst_len || dstsize == 0)
		return (size_src + dstsize);
	i = 0;
	while ((src[i] != '\0') && (dst_len + 1 < dstsize))
		dst[dst_len++] = src[i++];
	dst[dst_len] = '\0';
	return (sum);
}
