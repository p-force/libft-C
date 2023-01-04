/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bember <bember@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/22 22:32:22 by student           #+#    #+#             */
/*   Updated: 2021/01/05 17:44:35 by bember           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *str, char const *set)
{
	char	*ret;
	char	*start;
	char	*end;

	if (!str)
		return (NULL);
	start = (char*)str;
	while (*start && ft_strchr(set, *start))
		start++;
	if (!(*start))
	{
		ret = ft_calloc(1, sizeof(char));
		return (ret);
	}
	end = (char*)(str + ft_strlen(str) - 1);
	while (end > start && ft_strchr(set, *end))
		end--;
	ret = ft_substr(str, start - str, end - start + 1);
	return (ret);
}
