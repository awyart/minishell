/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awyart <awyart@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 11:28:41 by awyart            #+#    #+#             */
/*   Updated: 2017/09/25 15:46:55 by awyart           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_process(t_func listf[QSIZE])
{
	pid_t		father;
	char		*line;
	char		**av;
	char 		*tmp;
	char 		**env;

	while (1)
	{
		father = fork();
		if (father > 0)
		{
			
			PRINTF("$>");
			wait(0);
		}
		if (father == 0)
		{
			env = ft_loadenv();
			get_next_line(1, &line);
			av = ft_strsplit(line, ' ');
			// on check en premier les build in
			if (ft_apply_bi(av, listf, env) != 0)
				;
			//ft_printf(" --<>-- \nc'etait un build_in\n --<>-- \n");
			//on check si la fonciton en path existe
			else if	(ft_apply_fct0(av[0], av) != 0)
				;
			//ft_printf(" --<>-- \nLe chemin existait\n --<>-- \n");
			//on check dans path s'il y a un alias avec la variable path
			else if (((tmp = ft_loadfunction(av, env[PATH])) != NULL))
			{
				//ft_printf(" --<>-- \nLe chemin a ete trouve\n --<>-- \n");
				ft_apply_fct(tmp, av);
			}
			//sinon on envoie un message d'erreur
			else
				ft_printf("awsh: command not found: %s\n", av[0]);
		}
	}
}

int main(int ac, char **av, char **envp)
{
	t_func listf[QSIZE];

	(void)ac;
	(void)av;
	(void)envp;
	ft_check_bi(listf);
	ft_process(listf);
}