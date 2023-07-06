/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned_nbr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehdi <mehdi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 17:52:28 by mrharoui          #+#    #+#             */
/*   Updated: 2023/05/22 17:52:04 by mehdi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_unsigned_nbr(unsigned int n, int *counter)
{
	if (n >= 10)
	{
		ft_unsigned_nbr(n / 10, counter);
		ft_putchar_plus(n % 10 + '0', counter);
	}
	else
		ft_putchar_plus(n + '0', counter);
	counter++;
}
