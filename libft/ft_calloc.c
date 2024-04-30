/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjaada <rjaada@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 16:54:54 by rjaada            #+#    #+#             */
/*   Updated: 2024/04/30 16:54:56 by rjaada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nelem, size_t elsize)
/* mallocs for the size of nelem * elsize and sets everything to NULL*/
{
	char			*ptr;
	unsigned int	i;

	i = 0;
	ptr = (char *)malloc(nelem * elsize);
	if (!ptr)
		return (NULL);
	while (i < nelem * elsize)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
