/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafranc <alafranc@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 16:11:57 by alafranc          #+#    #+#             */
/*   Updated: 2021/02/25 16:29:33 by alafranc         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"

int     main(void)
{
	int	fd;
	int	ret;
	int	error;
	int	ret2;
	char	buff1[1000];
	char	buff2[1000];

	printf("\n\\***              read               ***\\\n\n");
	fd = open("Makefile", O_RDONLY);
	ret = read(fd, buff1, 999);
	ret >= 0 ? buff1[ret] = 0 : 0;
	error = errno;
	close(fd);
	fd = open("Makefile", O_RDONLY);
	ret2 = ft_read(fd, buff2, 999);
	ret2 >= 0 ? buff2[ret2] = 0 : 0;
	close(fd);
	if (ret != ret2)
		printf("Reading Makefile with a len of 999\n[ko]wrong ret value\n");
	else if (error != errno)
		printf("Reading Makefile with a len of 999\n[ko]wrong value in errno\n");
	else if (strcmp(buff1, buff2))
		printf("Reading Makefile with a len of 999\n[ko]reading wrong\n");
	else
		printf("[ok]\n");

	fd = open("empty.txt", O_RDONLY);
	ret = read(fd, buff1, -10);
	ret >= 0 ? buff1[ret] = 0 : 0;
	error = errno;
	close(fd);
	fd = open("empty.txt", O_RDONLY);
	ret2 = ft_read(-10, buff2, 100);
	ret2 >= 0 ? buff2[ret2] = 0 : 0;
	close(fd);
	if (ret != ret2)
		printf("Reading Makefile with a len of 999\n[ko]wrong ret value\n");
	else if (error != errno)
		printf("Reading Makefile with a len of 999\n[ko]wrong value in errno\n");
	else if (strcmp(buff1, buff2))
		printf("Reading Makefile with a len of 999\n[ko]reading wrong\n");
	else
		printf("[ok]\n");

	fd = -1;
	ret = read(fd, buff1, 100);
	ret >= 0 ? buff1[ret] = 0 : 0;
	error = errno;
	fd = -1;
	ret2 = ft_read(fd, buff2, 100);
	ret2 >= 0 ? buff2[ret2] = 0 : 0;
	if (ret != ret2)
		printf("Reading Makefile with a len of 999\n[ko]wrong ret value\n");
	else if (error != errno)
		printf("Reading Makefile with a len of 999\n[ko]wrong value in errno\n");
	else if (ret >= 0 && strcmp(buff1, buff2))
		printf("Reading Makefile with a len of 999\n[ko]reading wrong\n");
	else
		printf("[ok]\n");
}