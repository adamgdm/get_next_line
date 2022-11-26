/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agoujdam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 17:23:43 by agoujdam          #+#    #+#             */
/*   Updated: 2022/11/25 17:28:06 by agoujdam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	*ft_memmove(void *dst, const void *src, int len)
{
	unsigned char	*dest;
	unsigned char	*srcc;
	int				i;

	dest = (unsigned char *)dst;
	srcc = (unsigned char *)src;
	i = 0;
	if (!dest && !srcc)
		return (0);
	while (i < len && dst < src)
	{
		dest[i] = srcc[i];
		i++;
	}
	while (len-- && (!(dst < src)))
		dest[len] = srcc[len];
	return (dst);
}

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	sub_len;
	char	*substr;

	i = 0;
	if (!s)
		return (0);
	sub_len = start;
	if (len > ft_strlen(s))
		len = ft_strlen(s) - start;
	if (start > ft_strlen(s))
		len = 0;
	substr = (char *)malloc(sizeof(char) * (len + 1));
	if (!substr || !s)
		return (0);
	while (start < sub_len + len)
		substr[i++] = s[start++];
	substr[i] = '\0';
	return (substr);
}
