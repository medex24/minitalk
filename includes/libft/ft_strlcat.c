/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrharoui <mrharoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 13:58:03 by mrharoui          #+#    #+#             */
/*   Updated: 2022/11/10 22:29:31 by mrharoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	len_src;
	size_t	len_dst;

	i = 0;
	len_src = ft_strlen(src);
	len_dst = ft_strlen(dst);
	while (dst[i] != '\0' && i < dstsize)
		i++;
	j = 0;
	if (dstsize < len_dst)
		return (dstsize + len_src);
	while (src[j] != '\0' && i < dstsize - 1 && dstsize != 0)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (len_dst + len_src);
}

/*int main()
{
	char dest[15] = "";
    ft_strlcat(dest, "lorem ipsum dolor sit amet", 15);
	printf("%s\n", dest);
    return(0);
}*/
