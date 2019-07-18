/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dholiday <dholiday@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 15:22:42 by dholiday          #+#    #+#             */
/*   Updated: 2019/06/21 16:30:15 by dholiday         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*p;

	p = (void*)malloc(size);
	if (!(p))
		return (NULL);
	ft_memset(p, '\0', size);
	return (p);
}
