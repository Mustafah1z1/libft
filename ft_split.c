/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabu-oma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 12:11:05 by mabu-oma          #+#    #+#             */
/*   Updated: 2026/10/03 12:13:10 by mabu-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int  countword(const char *s, char c)
{
	int	words;
	int	i;

	i = 0;
	words = 0;
	if (!s)
		return (0);
	while (s[i] != '\0') 
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			words++;
		i++;
	}
	return (words);
}
static void	*free_all(char **s, int word)
{
    int i;

    i = 0;
    while (i < word)
    {
        free(s[i]);
        i++;
    }
    free(s);
    return (NULL);
}
static  int wordlen(char const *s , char c)
{
    int i;

    i = 0;

    while(s[i] != c && s[i] != '\0')
    {
        i++;
    }
    return (i);
}
static  char    *fillword(char const *s, int len)
{
    int i;
    char    *word;

    word = malloc(sizeof(char) * (len + 1));
    if (!word)
        return (NULL);
    i = 0;
    while (i < len)
    {
        word[i] = s[i];
        i++;
    }
    word[i] = '\0';
    return (word);
}

char    **ft_split(char const *s, char c)
{
    char    **finalstr;
    int     j;

    if (!s)
        return (NULL);
    j = 0;
    finalstr = malloc(sizeof(char *) * (countword(s , c) + 1));
    if (!finalstr)
        return (NULL);
    while (*s)
    {
        while (*s && *s == c)
            s++;
        if (*s)
        {
            finalstr[j] = fillword(s , wordlen(s , c));
            if (!finalstr[j])
                return (free_all(finalstr , j));
            s += wordlen(s , c);
            j++;
        }
    }
    finalstr[j] = NULL;
    return (finalstr);
}
/*#include <stdio.h>
int main (void)
{
    char **s = ft_split("split htis one word a time", ' ');
    int i = 0;
    while (i < 6)
    printf("%s\n", s[i++]);
}
    */