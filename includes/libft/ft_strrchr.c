/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrharoui <mrharoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 21:17:58 by mrharoui          #+#    #+#             */
/*   Updated: 2022/11/22 21:12:24 by mrharoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*ptr;

	ptr = NULL;
	while (*str)
	{
		if (*str == (unsigned char) c)
			ptr = (char *) str;
		str++;
	}
	if (*str == (unsigned char) c)
		ptr = (char *) str;
	return (ptr);
}

/*int main () {
   const char str[] = "teste";
   const char c = '\0';
   char *ret;

   ret = ft_strrchr(str, c);
	printf("String after |%c| is - |%s|\n", c , ret);
   
   return(0);
}*/