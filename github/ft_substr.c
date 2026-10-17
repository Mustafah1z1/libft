/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_substr.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/03 12:11:05 by username         #+#    #+#              */
/*   Updated: 2026/10/17 13:58:05 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*tar;
	size_t	i;
	size_t	j;
	size_t	slength;

	if (!s)
		return (NULL);
	slength = ft_strlen(s);
	if (slength <= start)
		len = 0;
	else if (len > slength - start)
		len = slength - start;
	i = start;
	j = 0;
	tar = malloc((len + 1) * sizeof(char));
	if (!tar)
		return (NULL);
	while (s[i] != '\0' && len > j)
	{
		tar[j] = s[i];
		j++;
		i++;
	}
	tar[j] = '\0';
	return (tar);
}
