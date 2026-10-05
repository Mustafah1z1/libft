/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabu-oma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 12:11:05 by mabu-oma          #+#    #+#             */
/*   Updated: 2026/10/03 12:13:10 by mabu-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	int		j;
	char	*p;

	i = 0;
	j = 0;
	while (s[i] != '\0')
		i++;
	p = (char *)malloc(sizeof(char) * (i + 1));
	if (!p)
		return (NULL);
	while (i > j)
	{
		p[j] = s[j];
		j++;
	}
	p[j] = '\0';
	return (p);
}