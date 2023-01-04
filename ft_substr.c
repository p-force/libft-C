/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bember <bember@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/22 22:40:49 by student           #+#    #+#             */
/*   Updated: 2021/01/05 17:44:39 by bember           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*str;
	unsigned int	i;
	unsigned int	len_s;

	i = 0;
	len_s = ft_strlen(s);
	if (len_s >= start)
	{
		if ((len_s - start) >= len)
			len_s = len;
		else
			len_s = len_s - start;
		if (!(str = (char *)malloc(sizeof(char) * (len_s + 1))))
			return (NULL);
		while (i < len_s)
		{
			str[i] = s[start];
			start++;
			i++;
		}
	}
	else if (!(str = (char *)malloc(sizeof(char))))
		return (NULL);
	str[i] = '\0';
	return (str);
}
