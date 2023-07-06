/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrharoui <mrharoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 16:41:43 by mrharoui          #+#    #+#             */
/*   Updated: 2022/12/03 08:51:34 by mrharoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*sdst;
	unsigned char	*ssrc;

	if (!dst && !src)
		return (NULL);
	sdst = (unsigned char *)dst;
	ssrc = (unsigned char *)src;
	i = 0;
	while (i < len)
	{
		sdst[i] = ssrc[i];
		i++;
	}
	return (dst);
}

/*int main()
{
    char src[] = "salut";
    char dest[100] = "";
    ft_memcpy(dest, src, 4);
    printf("%s\len", dest);
    return (0);
}*/
