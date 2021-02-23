#include    <stdio.h>
#include	<fcntl.h>
// int			ft_read(int fildes, void *buf, int nbyte);
// int			ft_strcmp(char *s1, char *s2);
// char		*ft_strcpy(char *dst, char *src);
// void		ft_strcpy(char *dst, char *src);
// int		ft_strcpy(void);
// char		*ft_strdup(char *s1);
// int			ft_strlen(char *str);
int				ft_write(int fildes, void *buf, int nbyte);
// void			ft_write(int fildes);
#include <stdlib.h>
int main()
{
	int fd;
	char *str;

	str = malloc(sizeof(char) * 12);
	fd = open("test", O_WRONLY);
	printf("\n%d", ft_write(fd, "comment ca va", 13));
	printf("\n%s", str);
}