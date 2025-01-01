/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aezghari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 16:40:49 by aezghari          #+#    #+#             */
/*   Updated: 2024/11/18 19:02:55 by aezghari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdio.h>
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1000
# endif

size_t	ft_strlen(const char *str);
char	*ft_strchr(char *s, int c);
char	*ft_strjoin(char *line, char *buffer);

char	*ft_read(int fd, char *line);
char	*ft_extract_line(char *line);
char	*ft_newline(char *line);
char	*get_next_line(int fd);
#endif
