/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmendes <anmendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 12:31:14 by anmendes          #+#    #+#             */
/*   Updated: 2024/10/15 12:39:18 by anmendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
/*#include <stdio.h>

int ft_strlen(char *src);
char *ft_strdup(char *src);

int main(int argc, char **argv)
{
    char *result;

    result = ft_strdup(argv[1]);
    printf ("%s", result);
    free(result);
}*/
int	ft_strlen(char *src);

char	*ft_strdup(char *src)
{
	int		i;
	char	*s;

	s = (char *)malloc(sizeof(char) * ft_strlen(src) + 1);
	if (s == NULL)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		s[i] = src[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
		i++;
	return (i);
}
