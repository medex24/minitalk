/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_carac.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehdi <mehdi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 15:41:27 by mrharoui          #+#    #+#             */
/*   Updated: 2023/05/21 21:10:47 by mehdi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_carac(const char *name, va_list args, int len)
{
	int	counter;

	counter = 0;
	if (name[len] == 'c')
		ft_putchar_plus(va_arg(args, int), &counter);
	else if (name[len] == 's')
		ft_put_str(va_arg(args, char *), &counter);
	else if (name[len] == 'p')
		ft_execute_fonction(va_arg(args, unsigned long), &counter);
	else if (name[len] == 'd' || name[len] == 'i')
		ft_putnbr_id(va_arg(args, int), &counter);
	else if (name[len] == 'x')
		ft_putnbr_x1(va_arg(args, int), &counter);
	else if (name[len] == 'X')
		ft_putnbr_x2(va_arg(args, unsigned int), &counter);
	else if (name[len] == 'u')
		ft_unsigned_nbr(va_arg(args, unsigned int), &counter);
	else if (name[len] == '%')
		ft_put_str("%", &counter);
	return (counter);
}
