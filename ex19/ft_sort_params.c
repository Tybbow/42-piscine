/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiskow <tiskow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 00:58:55 by tiskow            #+#    #+#             */
/*   Updated: 2016/11/03 02:12:26 by tiskow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_swap(char **a, char **b)
{
	char *tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

void	ft_tri(char **array, int lenght)
{
	int order;
	int i;

	i = 2;
	order = 0;
	while (!order)
	{
		order = 1;
		while (i < lenght)
		{
			if (ft_strcmp(array[i - 1], array[i]) > 0)
			{
				ft_swap(&array[i - 1], &array[i]);
				order = 0;
			}
			i++;
		}
		lenght--;
	}
}

int		main(int ac, char **ag)
{
	int i;
	int j;

	i = 1;
	j = 0;
	if (ag[i])
	{
		ft_tri(ag, ac);
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