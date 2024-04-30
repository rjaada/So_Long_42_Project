/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   win.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjaada <rjaada@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 16:51:10 by rjaada            #+#    #+#             */
/*   Updated: 2024/04/30 16:51:12 by rjaada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_win(t_data *data)
{
	ft_printf("Congratulations, you found all the Diamonds and the exit.\n");
	ft_printf("You won!\n");
	ft_printf("Is %d moves really the best you can do?\n", data->counter);
	exit(EXIT_SUCCESS);
}
