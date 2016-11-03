/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiskow <tiskow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 00:53:36 by tiskow            #+#    #+#             */
/*   Updated: 2016/11/03 00:58:04 by tiskow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int ac, char **ag)
{
	int i;
	int j;

	i = 1;
	j = 0;
	ac = ac;
	if (ag[i])
	{
		while (ag[i])
		{
			while (ag[i][j])
			{
				ft_putchar(ag[i][j]);
				j++;
			}
			ft_putchar(10);
			j = 0;
			i++;
		}
	}
}