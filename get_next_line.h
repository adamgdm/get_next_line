/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agoujdam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 17:26:13 by agoujdam          #+#    #+#             */
/*   Updated: 2022/11/26 17:36:53 by agoujdam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFFER_SIZE 100
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

char	*get_next_line(int fd);
int		ft_how_many_lines(char *s);
char	*ft_rendu(char *s);
char	*ft_reallocate_properly(char *s, long long count, unsigned int line);
void	*ft_memmove(void *dst, const void *src, int len);
size_t	ft_strlen(const char *s);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_do_ya_thang(char *s, int fd, int size, int m);

#endif
