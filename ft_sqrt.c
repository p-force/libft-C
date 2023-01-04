/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bember <bember@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 17:19:19 by bember            #+#    #+#             */
/*   Updated: 2021/01/05 17:19:41 by bember           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_sqrt(int nbr)
{
	int	sqrt;

	sqrt = 1;
	while (sqrt * sqrt < nbr)
		sqrt++;
	return (sqrt);
}