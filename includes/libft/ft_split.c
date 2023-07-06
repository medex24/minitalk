/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehdi <mehdi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 15:11:48 by mehdi             #+#    #+#             */
/*   Updated: 2023/05/22 17:33:08 by mehdi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	avance_mon_tata(char const *s)
{
	int	i;

	i = 0;
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
		i++;
	return (i);
}

int	numword(char const *s)
{
	int	i;
	int	n;
	int	len;

	len = ft_strlen(s);
	i = 0;
	n = 0;
	while (i < len)
	{
		while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
			i++;
		if (s[i])
		{
			while (s[i] && s[i] != ' ' && s[i] != '\t' && s[i] != '\n')
			i++;
		n++;
		}
	}
	return (n);
}

int	word_len(char const	*s, int i)
{
	int	c;

	c = 0;
	while (s[i] && s[i] != ' ' && s[i] != '\t' && s[i] != '\n')
	{
		i++;
		c++;
	}
	return (c);
}

char	**ft_split(char const *s)
{
	char	**strings = NULL;
	int	i;
	int j;
	int	k;
	strings = (char **)malloc((numword( * strings) + 1) * sizeof(char *));
	if (!strings)
		return (NULL);
	i = 0;
	j = 0;
	while (avance_mon_tata(s))
	{
		if (s[i])
		{
			k = 0;
			strings[j] = (char *)malloc((word_len(s, i)) * sizeof(char));
			if (!strings[j])
				return (NULL);
			while (s[i] && s[i] != ' ' && s[i] != '\t' && s[i] != '\n')
			{
				strings[j][k] = s[i];
				i++;
				k++;
			}
			strings[j][k] = '\0';
			j++;
		}
		strings[j] = NULL;
	}
	return (strings);
}

/*int main()
{
	char **strings;

	strings = ft_split("     yabad was         not her        reee    !");
	int i = 0;
	while (i < 5)
	{
		printf("strings[%d] = %s\n", i, strings[i]);
		i++;
	}
	return (0);
}*/
