/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lulebugl <lulebugl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/24 00:04:40 by lulebugl          #+#    #+#             */
/*   Updated: 2020/03/26 02:20:51 by lulebugl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

# define GREEN   "\033[32m"
# define RESET   "\033[0m"

# define STRLEN(x)		printf("`%s` = %d (%d)\n", x, ft_strlen(x), (int)strlen(x));
# define STRCMP(a, b)	printf("`%s`:`%s` = %d (%d)\n", a, b, ft_strcmp(a, b), strcmp(a, b));

int		ft_strlen(char const *str);
char	*ft_strcpy(char *dst, char const *src);
int		ft_strcmp(char const *s1, char const *s2);

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
	
	return (0);
}