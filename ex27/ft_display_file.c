/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiskow <tiskow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 00:25:45 by tiskow            #+#    #+#             */
/*   Updated: 2016/11/04 01:29:01 by tiskow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#define	BUFF_SIZE 4096

void	ft_putchar(char c)
{
			write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		main(int ac, char **ag)
{
	int		fd;
	int		ret;
	char	buf[BUFF_SIZE + 1];
	
	if (ac == 1)
		write(2, "File name missing.\n", 19);
	else if (ac > 2)
		write(2, "Too many arguments.\n", 20);
	else
	{
		fd = open(ag[1], O_RDONLY);
		if (fd != -1)
		{
			while ((ret = read(fd, buf, BUFF_SIZE)))
			{
				buf[ret] = '\0';
				if (ret)
					ft_putstr(buf);
			}
			close(fd);
		}
	}
}