/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehdi <mehdi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 17:30:38 by mrharoui          #+#    #+#             */
/*   Updated: 2023/07/05 23:11:30 by mehdi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include <signal.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include "../includes/libft/libft.h"
# include "../includes/printf/ft_printf.h"


int		ft_atoi(const char *str);
void	ft_get_binary(int sig);
void	ft_send_bit(pid_t pid_serveur, char *str);

#endif
