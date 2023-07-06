/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrharoui <mrharoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 18:36:24 by mrharoui          #+#    #+#             */
/*   Updated: 2022/11/24 00:48:24 by mrharoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *memoryBlock, int searchedChar, size_t size)
{
	size_t			i;
	unsigned char	*s;

	s = (unsigned char *)memoryBlock;
	i = 0;
	while (i < size)
	{
		if (s[i] == (unsigned char)searchedChar)
		{
			return (&s[i]);
		}
		i++;
	}
	return (NULL);
}

/*int main()
{
	char memoryBlock[] = {'s','a','l','e','m'};
	char *pos = ft_memchr(memoryBlock, 'l', 7);
	return (0);
}*/