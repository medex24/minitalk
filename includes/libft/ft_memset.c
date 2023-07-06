/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrharoui <mrharoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 20:43:09 by mrharoui          #+#    #+#             */
/*   Updated: 2022/11/15 20:48:38 by mrharoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t count)
{
	size_t	i;

	i = 0;
	while (i < count)
	{
		((unsigned char *) str)[i++] = (unsigned char) c;
	}
	return (str);
}
/*int main () 
{
   char str[] = "sthsdfbsed000";
   printf("%s", ft_memset(str, 'k', 2));
   return(0);
}*/
