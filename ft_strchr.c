/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabu-oma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 17:55:09 by mabu-oma          #+#    #+#             */
/*   Updated: 2026/10/01 20:06:29 by mabu-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	x;
	unsigned char	*tar;

	tar = (unsigned char *)s;
	x = (unsigned char)c;
	while (*tar != x)
	{
		if (*tar == '\0' && *tar != x)
		{
			break ;
		}
		tar++;
	}
	if (*tar == x)
		return ((char *)tar);
	else
		return (NULL);
}
