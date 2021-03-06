/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiskow <tiskow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 00:58:55 by tiskow            #+#    #+#             */
/*   Updated: 2016/11/06 17:26:29 by tiskow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int		ft_strcmp(char *s1, char *s2)
{
	while ((*s1 == *s2) && (*s1) && (*s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

void	sort_params(char **argv, int argc)
{
	int		i;
	char	*tmp;
	int		sort;

	i = 1;
	sort = 1;
	while (i < argc - 1)
	{
		if (ft_strcmp(argv[i], argv[i + 1]) > 0)
		{
			tmp = argv[i + 1];
			argv[i + 1] = argv[i];
			argv[i] = tmp;
			sort = 0;
		}
		i++;
	}
	if (sort == 0)
		sort_params(argv, argc);
}

int		main(int argc, char **argv)
{
	int i;

	i = 1;
	sort_params(argv, argc);
	while (i < argc)
	{
		ft_putstr(argv[i++]);
		ft_putstr("\n");
	}
	return (0);
}
