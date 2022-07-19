/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitor <vitor@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 18:03:17 by vitor             #+#    #+#             */
/*   Updated: 2022/07/19 18:10:58 by vitor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

char	*get_next_line(int fd);

size_t	ft_strlen(const char *s)
{
	int	len;

	if (!s)
		return (0);
	len = 0;
	while (s[len])
		len++;
	return ((size_t)len);
}

char	*ft_strjoin(char *s1, char *s2)
{
	int		s1_len;
	int		s2_len;
	char	*str1;
	int		all_len;

	if (!s1)
	{
		s1 = malloc (1);
		s1[0] = 0;
	}
	if (!s1 || !s2)
		return (NULL);
	s1_len = -1;
	s2_len = 0;
	all_len = ft_strlen (s1) + ft_strlen (s2) + 1;
	str1 = malloc(all_len);
	if (!str1)
		return (NULL);
	while (s1[++s1_len])
		str1[s1_len] = s1[s1_len];
	while (s2[s2_len])
		str1[s1_len++] = s2[s2_len++];
	str1[s1_len] = '\0';
	free(s1);
	return (str1);
}

char	*ft_strchr(char *s, int c)
{
	int	position;

	if (!s)
		return (0);
	position = 0;
	while (s[position])
	{	
		if (s[position] == (char)c)
			return ((char *)s + position);
		position++;
	}
	if (s[position] == c)
		return ((char *)s + position);
	if (c == 0)
		return (0);
	return (NULL);
}
