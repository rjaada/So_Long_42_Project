/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   win.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjaada <rjaada@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 22:50:18 by rjaada            #+#    #+#             */
/*   Updated: 2024/04/29 22:50:20 by rjaada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_win(t_data *data)
{
	printf("Congratulations, you found all the Diamonds and the exit.\n");
	printf("You won!\n");
	printf("Is %d moves really the best you can do?\n", data->counter);
	exit(EXIT_SUCCESS);
}
