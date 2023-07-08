/* ************************************************************************** */
/*                                                       d8    ad888888b      */
/*                                                     d888   d88    888      */
/*   client.c                                        d8  88         a88       */
/*                                                  d8   88        d88        */
/*   By: mrharoui <mrharoui@student.42.fr>        d8     88      a88          */
/*                                              8888888888888  a8P            */
/*   Created: 2023/05/07 17:32:47 by mrharoui            88   d88             */
/*   Updated: 2023/07/07 00:15:05 by mrharoui            88   88888888888     */
/*                                                                            */
/* ************************************************************************** */

#include "../header/minitalk.h"

static pid_t	server_pid;

void	ft_send_lenght(char *str)
{
	int lenght;
	int bitcomp;
	int i;

	i = 7;
	bitcomp = 1;
	lenght = ft_strlen(str);
	while (i >= 0)
	{
		if (lenght & bitcomp << i)
			kill(server_pid, SIGUSR1);
		else
			kill(server_pid, SIGUSR2);
		i--;
		usleep(250);
	}
}


// envoie des bits de la string argv[2]
void	ft_send_bit(pid_t server_pid, char *str)
{
	int	i;
	int	bitcomp;

	i = 7;
	bitcomp = 1;
	while (*str)
	{
		while (i >= 0)
		{
			if (*str & bitcomp << i)
				kill(server_pid, SIGUSR1);
			else
				kill(server_pid, SIGUSR2);
			i--;
			usleep(300);
		}
		str++;
	}
}

int	main(int argc, char *argv[])
{
	server_pid = ft_atoi(argv[1]); // QUAND J'ENLEVE CETTE PARTIE DU CODE SA ME SORT USER=DEFINED SIGNAL 2
	// utiliser atoi pour convertir le argv[1] en int
	if (argc != 3)
	{
		printf("Merci de fournir le PID + le message.\n");
		exit(EXIT_FAILURE);
	}
	else if (argc == 3)
	{
		ft_send_lenght(argv[2]);
		// while (*argv[2] != '\0')
		// {
		// 	ft_send_bit(server_pid, argv[2]);
		// 	argv[2]++;
		// }
	}
	return (0);
}
