/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitor <vitor@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 18:13:46 by vitor             #+#    #+#             */
/*   Updated: 2022/07/20 19:47:16 by vitor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <unistd.h>
# include <stdlib.h>

# define MAX_FD_SIZE 1024

char	*get_next_line(int fd);

size_t	ft_strlen(const char *s);

char	*ft_strjoin(char *s1, char *s2);

char	*ft_strchr(char *s, int c);

#endif
