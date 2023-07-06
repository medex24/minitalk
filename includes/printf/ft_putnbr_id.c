/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_id.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehdi <mehdi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 11:45:22 by mrharoui          #+#    #+#             */
/*   Updated: 2023/05/21 21:11:43 by mehdi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_id(int n, int *counter)
{
	if (n == -2147483648)
		ft_put_str("-2147483648", counter);
	else if (n < 0)
	{
		ft_putchar_plus('-', counter);
		ft_putnbr_id(-n, counter);
	}
	else if (n >= 10)
	{
		ft_putnbr_id(n / 10, counter);
		ft_putchar_plus(n % 10 + '0', counter);
	}
	else
		ft_putchar_plus(n + '0', counter);
	counter++;
}
