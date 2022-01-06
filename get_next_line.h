/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarlee <bcarlee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 12:33:13 by bcarlee           #+#    #+#             */
/*   Updated: 2021/11/17 18:53:17 by bcarlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# if BUFFER_SIZE < 0
#  undef BUFFER_SIZE
#  define BUFFER_SIZE 0
# endif
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10000000
# endif
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

void	*ft_calloc(size_t n, size_t size);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_substr(char *str, int s, int l, int flag);
char	*get_next_line(int fd);
int		check_static_var(char *rem, char **line);
size_t	ft_strlcpy(char *dst, char *src, size_t size);
char	*ft_strchr_st(const char *str, int sym);
int		ft_strlen(const char *str, char sym);
void	cut_line(char **line, char *rem, char *buf, int flag);

#endif