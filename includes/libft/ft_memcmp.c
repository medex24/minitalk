/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrharoui <mrharoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 21:51:00 by mrharoui          #+#    #+#             */
/*   Updated: 2022/12/03 08:29:45 by mrharoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *pointer1, const void *pointer2, size_t size)
{
	size_t	i;
	char	*arr1;
	char	*arr2;

	arr1 = (char *)pointer1;
	arr2 = (char *)pointer2;
	i = 0;
	while (i < size)
	{
		if (arr1[i] != arr2[i])
			return ((unsigned char)arr1[i] - (unsigned char)arr2[i]);
		i++;
	}
	return (0);
}

/*int main()
{
    int arr1[] = {1, 2, 3};
    int arr2[] = {1, 2, 3, 4};
    printf("%d\n", ft_memcmp(arr1, arr2, 10));
    return (0);
}*/