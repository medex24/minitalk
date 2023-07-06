/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehdi <mehdi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 10:42:16 by mrharoui          #+#    #+#             */
/*   Updated: 2023/05/21 23:00:04 by mehdi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(unsigned long nbr, int *len)
{
	if (nbr >= 16)
	{
		ft_putnbr((nbr / 16), len);
		nbr = nbr % 16;
	}
	if (nbr < 10)
	{
		ft_putchar_plus(nbr + 48, len);
	}
	else
	{
		ft_putchar_plus(nbr + 87, len);
	}
}

void	ft_execute_fonction(unsigned long nbr, int *counter)
{
	ft_put_str("0x", counter);
	ft_putnbr(nbr, counter);
}
