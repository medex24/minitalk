/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehdi <mehdi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 15:56:07 by mrharoui          #+#    #+#             */
/*   Updated: 2023/07/05 02:03:28 by mehdi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(const char *name, ...);
void	ft_execute_fonction(unsigned long nbr, int *counter);
int		ft_print_carac(const char *name, va_list args, int len);
void	ft_putchar_plus(char c, int *counter);
size_t	ft_strlen(const char *str);
void	ft_put_str(char *s, int *counter);
void	ft_putnbr(unsigned long nbr, int *len);
void	ft_putnbr_id(int n, int *counter);
void	ft_unsigned_nbr(unsigned int n, int *counter);
void	ft_putnbr_x2(unsigned int number, int *len);
void	ft_putnbr_x1(unsigned int nbr, int *len);
void	ft_putchar(char c);

#endif
