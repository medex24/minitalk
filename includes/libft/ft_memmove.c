/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehdi <mehdi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 15:53:56 by mrharoui          #+#    #+#             */
/*   Updated: 2022/12/04 07:50:12 by mehdi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	if (! dst && ! src)
		return (dst);
	if (dst > src)
	{
		while (n--)
		{
			((unsigned char *) dst)[n] = ((unsigned char *) src)[n];
		}
	}
	else
		ft_memcpy (dst, src, n);
	return (dst);
}

/*int main()
{
    char src[10] = "salut comm";
	char dst[10] = "";
    ft_memmove(dst, src + 2, 7);
    printf("%s\n", dst);
    return (0);
}*/

