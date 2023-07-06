/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_exa_x2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehdi <mehdi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 16:06:58 by mrharoui          #+#    #+#             */
/*   Updated: 2023/05/21 21:11:07 by mehdi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_x2(unsigned int number, int *len)
{
	if (number >= 16)
	{
		ft_putnbr_x2((number / 16), len);
		ft_putnbr_x2((number % 16), len);
	}
	else if (number < 10)
	{
		ft_putchar_plus((number + 48), len);
	}
	else
	{
		ft_putchar_plus((number + 55), len);
	}
}
