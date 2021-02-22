#include    <stdio.h>
#include	<fcntl.h>
// int			ft_read(int fildes, void *buf, int nbyte);
// int			ft_strcmp(char *s1, char *s2);
// char		*ft_strcpy(char *dst, char *src);
// void		ft_strcpy(char *dst, char *src);
// int		ft_strcpy(void);
// char		*ft_strdup(char *s1);
// int			ft_strlen(char *str);
// void			ft_write(int fildes, const void *buf, int nbyte);
void			ft_write(int fildes);
// void			ft_write(void);
// int		add(int a, int b);
int		add(void);
int main()
{
	printf("%d", add());
}