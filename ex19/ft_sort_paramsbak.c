/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiskow <tiskow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 00:58:55 by tiskow            #+#    #+#             */
/*   Updated: 2016/11/06 16:59:15 by tiskow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

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

	i = 1;
	order = 1;
	while (i < lenght - 1)
	{
		if (ft_strcmp(array[i], array[i + 1]) > 0)
		{
			ft_swap(&array[i + 1], &array[i]);
			order = 0;
		}
		i++;
	}
}

int		main(int ac, char **ag)
{
	int i;

	i = 1;
	ft_tri(ag, ac);
	while (i < ac)
	{
		ft_putstr(ag[i++]);
		ft_putstr("\n");
	}
	return (0);
}
