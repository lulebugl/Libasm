/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lulebugl <lulebugl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/24 00:04:40 by lulebugl          #+#    #+#             */
/*   Updated: 2020/03/26 04:36:48 by lulebugl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <fcntl.h>

# define GREEN   "\033[32m"
# define RESET   "\033[0m"

# define STRLEN(x)		printf("`%s` = %d (%d)\n", x, ft_strlen(x), (int)strlen(x));
# define STRCMP(a, b)	printf("`%s`:`%s` = %d (%d)\n", a, b, ft_strcmp(a, b), strcmp(a, b));
# define WRITE(s, x)	printf("%ld (`%s`:%ld)\n", ft_write(STDOUT_FILENO, s, x), s, x);

int		ft_strlen(char const *str);
char	*ft_strcpy(char *dst, char const *src);
int		ft_strcmp(char const *s1, char const *s2);
ssize_t	ft_write(int fd, void const *buf, size_t nbyte);

int		main(void)
{
	const char *str = "hell";
	char		buffer[42];
	int			i;

	i = -1;
	while (i < 42)
		buffer[++i] = 0;

	printf(GREEN"Start strlen :\n"RESET);
		STRLEN("Hello")
		STRLEN("Ca marche?")
		STRLEN("Il semblerait")
		STRLEN("0123456789ABCDEF")
		STRLEN("")
		STRLEN(str)		
	printf(GREEN"End strlen\n"RESET);

	printf(GREEN"\nStart strcpy :\n"RESET);
		printf("`%s` (`test`)\n", ft_strcpy(buffer, "test"));
		printf("`%s` ()\n", ft_strcpy(buffer, ""));
		printf("`%s` (str = `hell`)\n", ft_strcpy(buffer, str));
	printf(GREEN"End strcpy\n"RESET);

	printf(GREEN"\nStart strcmp :\n"RESET);
		STRCMP("", "")
		STRCMP("toto", "toto")
		STRCMP("", "toto")
		STRCMP("toto", "")
		STRCMP("toto", "totobar")
		STRCMP("ab", "bb")
		STRCMP("bb", "bb")
		STRCMP("bb", "ab")
	printf(GREEN"End strcmp\n"RESET);
	
	printf(GREEN"\nStart ft_write :\n"RESET);
		WRITE("Hello", 4L)
		WRITE("Ca marche?", 4L)
		WRITE("Il semblerait", 4L)
		WRITE("0123456789ABCDEF", 2L)
		WRITE("", 2L)
		WRITE(str, 4L)
			// ft_write(1, "Hello", 4L);
			// ft_write(1, "Ca marche?", 4L);
			// ft_write(1, "Il semblerait", 4L);
			// ft_write(1, "0123456789ABCDEF", 2L);
			// ft_write(1, "", 2L);
			// ft_write(1, str, 4L);
	printf(GREEN"End ft_write\n"RESET);
	return (0);
}