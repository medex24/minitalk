/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrharoui <mrharoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 12:16:29 by mrharoui          #+#    #+#             */
/*   Updated: 2022/12/03 08:52:14 by mrharoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	n;
	char	*pt;

	i = 0;
	if (!needle[0])
		return ((char *)haystack);
	i = 0;
	while ((haystack[i] != '\0') && (i < len))
	{
		if (haystack[i] == needle[0])
		{
			n = 0;
			pt = (char *)haystack + i;
			while (haystack[i + n] == needle[n] && i + n < len)
			{
				n++;
				if (needle[n] == '\0')
					return (pt);
			}
			pt = 0;
		}
		i++;
	}
	return (NULL);
}

/*int main()
{
    char s1[] = "lorem ipsum dolor sit amet";
    char s2[] = "ipsummmd";
	char *ptr = ft_strnstr(s1, s2, 30);
	printf("s2: \"%s\", find: \"%s\"\n", s2, ptr);
	return (0);
}*/