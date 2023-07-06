/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_exa_x1.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehdi <mehdi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 00:08:00 by mrharoui          #+#    #+#             */
/*   Updated: 2023/05/21 21:11:00 by mehdi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_x1(unsigned int nbr, int *len)
{
	if (nbr >= 16)
	{
		ft_putnbr_x1((nbr / 16), len);
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
