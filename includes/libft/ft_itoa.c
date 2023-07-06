/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrharoui <mrharoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 01:24:05 by mrharoui          #+#    #+#             */
/*   Updated: 2022/12/03 08:51:04 by mrharoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static unsigned int	get_positive_number(int n)
{
	if (n < 0)
		return ((unsigned int)-n);
	return ((unsigned int)n);
}

static int	get_digit_count(int n)
{
	int				count;
	unsigned int	nb;

	count = n < 0;
	nb = get_positive_number(n);
	while (nb / 10 != 0)
	{
		nb /= 10;
		count++;
	}
	return (count + 2);
}

char	*ft_itoa(int n)
{
	char			*res;
	unsigned int	nb;
	int				dg;

	dg = get_digit_count(n);
	res = malloc((dg) * sizeof(char));
	if (!res)
		return (NULL);
	res[--dg] = '\0';
	nb = get_positive_number(n);
	while (nb / 10 != 0)
	{
		res[--dg] = (nb % 10) + '0';
		nb /= 10;
	}
	res[--dg] = nb + '0';
	if (dg == 1)
		res[--dg] = '-';
	return (res);
}

/*int	main(void)
{
	int n = 0;
	char *str;
	str = ft_itoa(n);
	printf("%s\n", str);
	return (0);
}*/