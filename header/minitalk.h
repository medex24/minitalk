/* ************************************************************************** */
/*                                                       d8    ad888888b      */
/*                                                     d888   d88    888      */
/*   minitalk.h                                      d8  88         a88       */
/*                                                  d8   88        d88        */
/*   By: mrharoui <mrharoui@student.42.fr>        d8     88      a88          */
/*                                              8888888888888  a8P            */
/*   Created: 2023/05/07 17:30:38 by mrharoui            88   d88             */
/*   Updated: 2023/07/06 21:28:04 by mrharoui            88   88888888888     */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include <signal.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include "../includes/libft/libft.h"


int		ft_atoi(const char *str);
void	ft_get_binary(int sig);
void	ft_send_bit(pid_t pid_serveur, char *str);

#endif
