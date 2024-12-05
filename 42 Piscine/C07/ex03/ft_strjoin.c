/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprejith <pprejith@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 17:11:07 by pprejith          #+#    #+#             */
/*   Updated: 2024/12/05 15:55:00 by pprejith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	int	src_letter;
	int	dest_letter;

	src_letter = 0;
	dest_letter = 0;
	while (dest[dest_letter] != '\0')
	{
		dest_letter++;
	}
	while (src[src_letter] != '\0')
	{
		dest[dest_letter] = src[src_letter];
		src_letter++;
		dest_letter++;
	}
	dest[dest_letter] = '\0';
	return (dest);
}

int	str_len(char *str)
{
	int	len;

	len = 0;
	while (str[len])
	{
		len++;
	}
	return (len);
}

int	total_len(int size, char **strs)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (i < size)
	{
		len += str_len(strs[i]);
		i++;
	}
	return (len);
}

char	*size_zero(void)
{
	char	*empty;

	empty = (char *)malloc(sizeof(char));
	if (empty == NULL)
		return (NULL);
	*empty = '\0';
	return (empty);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		joinlen;
	char	*finalstr;

	if (size == 0)
		return (size_zero());
	i = 0;
	joinlen = total_len(size, strs);
	joinlen = joinlen + ((size - 1) * str_len(sep));
	finalstr = (char *)malloc((joinlen + 1) * sizeof(char));
	if (finalstr == NULL)
		return (NULL);
	*finalstr = '\0';
	while (i < size)
	{
		ft_strcat(finalstr, strs[i]);
		if (i < (size - 1))
			ft_strcat(finalstr, sep);
		i++;
	}
	return (finalstr);
}

#include <stdio.h>

int	main(void)
{
	char *strs[] = {"Hellooooooo", "Guysssssss", "<3"};
	char sep[] = "   ";
	int size;
	char *result;

	size = 4;
	result = ft_strjoin(size, strs, sep);
	printf("Joined string: %s\n", result);
	free(result);
	return (0);
}