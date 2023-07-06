/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrharoui <mrharoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 21:32:26 by mrharoui          #+#    #+#             */
/*   Updated: 2022/11/27 03:37:16 by mrharoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	str = NULL;
	i = 0;
	if (start >= ft_strlen(s))
	{
		str = malloc(1);
		str[0] = '\0';
		return (str);
	}
	if (len >= ft_strlen(s))
		len = ft_strlen(s);
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str || !s)
		return (NULL);
	i = 0;
	while (s[start + i] && i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*int main()
{
	char str1[] = "salut comment cv";
	char *str2;
	str2 = ft_substr(str1, 0, 96);

	printf("str2: \"%s\"\n", str2);
	return (0);
}*/

// suposer me return "ut";
