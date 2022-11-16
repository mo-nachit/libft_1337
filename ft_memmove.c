/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnachit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 15:42:59 by mnachit           #+#    #+#             */
/*   Updated: 2021/12/03 01:42:39 by mnachit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*asrc;
	char	*dest;

	asrc = (char *)src;
	dest = (char *)dst;
	if (asrc < dest)
	{
		while (n--)
			dest[n] = asrc[n];
	}
	else
		ft_memcpy(dest, src, n);
	return (dst);
}
#include<stdio.h>
int main()
{
    char dst[50] = "ssssimo";
    char src[50]  = "simo";

    ft_memmove(src+2, dst, 6);

    printf("%s", src);

    return 0;
}