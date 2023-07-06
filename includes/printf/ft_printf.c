/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehdi <mehdi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 20:50:02 by mrharoui          #+#    #+#             */
/*   Updated: 2023/05/21 21:11:15 by mehdi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar_f(char c)
{
	write(1, &c, 1);
}

int	ft_printf(const char *name, ...)
{
	int		len;
	int		final_len;
	va_list	arg;

	len = 0;
	final_len = 0;
	va_start(arg, name);
	while (name[len])
	{
		if (name[len] == '%' && ++len)
		{
			final_len += ft_print_carac(name, arg, len);
			len++;
		}
		else
			ft_putchar_plus(name[len++], &final_len);
	}
	va_end(arg);
	return (final_len);
}
