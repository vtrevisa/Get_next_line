/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitor <vitor@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 17:20:22 by vitor             #+#    #+#             */
/*   Updated: 2022/07/19 18:03:41 by vitor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>

# define MAX_FD_SIZE 1024

char	*get_next_line(int fd);

size_t	ft_strlen(const char *s);

char	*ft_strjoin(char *s1, char *s2);

char	*ft_strchr(char *s, int c);

#endif