/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_norma.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrush <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/24 17:56:36 by atrush            #+#    #+#             */
/*   Updated: 2017/03/24 17:56:54 by atrush           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

void	norma(char **line)
{
	if (*line)
	{
		free(*line);
		*line = NULL;
	}
}
