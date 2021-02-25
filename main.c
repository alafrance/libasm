/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafranc <alafranc@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 14:14:16 by alafranc          #+#    #+#             */
/*   Updated: 2021/02/25 18:20:08 by alafranc         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"

void	ft_header(char *filename)
{
	int	count;
	int i;
	int j;

	j = 0;
	count = 20 - ft_strlen(filename) - 2;

	printf("|*----------------*|\n|");
	while (j != 2)
	{
		i = 0;
		while (i != count / 2)
		{
			printf("-");
			i++;
		}
		if (j == 0)
			printf("%s", filename);
		j++;
	}
	printf("|\n|*----------------*|\n\n");
}

void	ft_test_read(char *filename, int nbytes)
{
	int		errno;
	char	str[nbytes];
	int	fd;

	errno = 0;
	ft_header("read");
	fd = open(filename, O_RDONLY);
	ft_read(fd, str, nbytes);
	dprintf(1, "read without error: %s\n", str);
	ft_read(-1, str, nbytes);
	dprintf(1, "fd: -1, errno = %s\n", strerror(errno));
	ft_read(fd, str, -1);
	dprintf(1, "nbytes: -1, errno = %s\n", strerror(errno));
	close(fd);
}

void	ft_test_write(char *filename,int nbytes)
{
	int		errno;
	char	str[100] = "coucou hello\n";
	int		fd;
	int		r_wr;


	ft_header("write-");
	if	(nbytes > 100)
		return ;
	errno = 0;
	fd = open(filename, O_WRONLY);
	r_wr = ft_write(fd, str, nbytes);
	dprintf(1, "we write : %d\n", r_wr);
}

void	ft_test_strcmp()
{
	char	str_1[100] = "Qui fait du zele? Arice !";
	char	str_2[100] = "Qui fait du zele? Blexis !";
	ft_header("strcmp");
	dprintf(1, "my strcmp return : %d\n", ft_strcmp(str_1, str_2));
	dprintf(1, "the strcmp return : %d\n", strcmp(str_1, str_2));
	
}

void	ft_test_strcpy()
{
	ft_header("strcpy");
}

void	ft_test_strdup()
{
	ft_header("strdup");

}

void	ft_test_strlen()
{
	ft_header("strlen");

}

int main()
{
	ft_test_read("test.txt", 20);
	ft_test_write("empty.txt", 12);
	ft_test_strcmp();
	ft_test_strcpy();
	ft_test_strdup();
	ft_test_strlen();
}