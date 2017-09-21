/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awyart <awyart@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 11:28:41 by awyart            #+#    #+#             */
/*   Updated: 2017/09/21 16:13:35 by awyart           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void ft_process()
{
	pid_t 		father;
	char 		*line;
	char		**av;


	while (1)
	{
		father = fork();
		if (father > 0)
		{
			PRINTF("$>");
			wait(0);
			PRINTF("fin father\n");
		}
		if (father == 0)
		{
			get_next_line(1, &line);
			av = ft_strsplit(line, ' ');
			if (ft_strcmp(av[0], "ls") == 0)
				execve("/bin/ls", av, ag);
			else
			{
				PRINTF("%s\n", 0);
			}
		}
	}
}

int main(void)
{
	t_stack listf[QSIZE];
	char	**env;

	env = ft_loadenv();
	ft_loadFunction(&listf, PATH);
	ft_process(env);
}