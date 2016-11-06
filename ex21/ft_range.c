/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiskow <tiskow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 02:42:03 by tiskow            #+#    #+#             */
/*   Updated: 2016/11/06 14:45:25 by tiskow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*tmp;
	int		i;

	tmp = NULL;
	if (min >= max)
		return (tmp);
	tmp = (int *)malloc(sizeof(int *) * (max - min + 1));
	if (!tmp)
		return (NULL);
	i = 0;
	while (min < max)
		tmp[i++] = min++;
	return (tmp);
}
