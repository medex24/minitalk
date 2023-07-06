/* ************************************************************************** */
/*                                                       d8    ad888888b      */
/*                                                     d888   d88    888      */
/*   ft_putchar_fd.c                                 d8  88         a88       */
/*                                                  d8   88        d88        */
/*   By: mrharoui <mrharoui@student.42.fr>        d8     88      a88          */
/*                                              8888888888888  a8P            */
/*   Created: 2022/12/04 01:43:40 by mrharoui            88   d88             */
/*   Updated: 2023/05/28 14:09:23 by mrharoui            88   88888888888     */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
