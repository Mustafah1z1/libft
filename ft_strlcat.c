/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabu-oma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 18:37:50 by mabu-oma          #+#    #+#             */
/*   Updated: 2026/09/28 20:27:05 by mabu-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t			i;
	size_t			dst_s;
	size_t			src_s;

	dst_s = 0;
	src_s = 0;
	i = 0;
	while (dst[dst_s] != '\0' && dst_s < size)
		dst_s++;
	while (src[src_s] != '\0')
		src_s++;
	if (size <= dst_s)
		return (size + src_s);
	while ((dst_s + i) < size - 1 && src[i] != '\0')
	{
		dst[dst_s + i] = src[i];
		i++;
	}
	dst[dst_s + i] = '\0';
	return (dst_s + src_s);
}
