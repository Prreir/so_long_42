/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 11:13:11 by lugoncal          #+#    #+#             */
/*   Updated: 2023/02/14 11:13:12 by lugoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	freemap(t_data *data)
{
	int	i;

	i = 0;
	while (i < data->alt)
	{
		free(data->lines[i]);
		i++;
	}
	free(data->lines);
}

void	error_msg(char *msg, t_data *data)
{
	ft_putstr_fd("Error: ", 1);
	ft_putstr_fd(msg, 1);
	ft_putstr_fd("\n", 1);
	if (data->lines)
		freemap(data);
	exit(1);
}

void	iniciar(t_data *data)
{
	data->comp = 0;
	data->alt = 0;
	data->lines = NULL;
	data->itens.collec = 0;
	data->itens.exit = 0;
	data->itens.exit_x = 0;
	data->itens.exit_y = 0;
	data->itens.player = 0;
	data->itens.player_x = 0;
	data->itens.player_y = 0;
}