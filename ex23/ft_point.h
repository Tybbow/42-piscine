/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_point.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiskow <tiskow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 13:45:03 by tiskow            #+#    #+#             */
/*   Updated: 2016/11/06 14:52:13 by tiskow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FT_POINT_H
# define __FT_POINT_H

typedef	struct	s_point
{
	int		x;
	int		y;
}				t_point;
void			set_point(t_point *point);
#endif
