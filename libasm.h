/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libasm.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafranc <alafranc@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 14:14:13 by alafranc          #+#    #+#             */
/*   Updated: 2021/02/25 14:14:52 by alafranc         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBASM_H
#define LIBASM_H

#include    <stdio.h>
#include    <stdlib.h>
#include	<fcntl.h>
#include	<unistd.h>
#include	<errno.h>
#include	<string.h>
int			ft_read(int fildes, void *buf, int nbyte);
int			ft_strcmp(char *s1, char *s2);
char		*ft_strcpy(char *dst, char *src);
// char		*ft_strdup(char *s1);
int			ft_strdup(char *s1);
int			ft_strlen(char *str);
int			ft_write(int fildes, void *buf, int nbyte);

#endif