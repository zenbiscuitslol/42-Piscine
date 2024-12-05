/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprejith <pprejith@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 12:47:28 by pprejith          #+#    #+#             */
/*   Updated: 2024/12/02 13:20:00 by pprejith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		len;
	int		i;
	char	*dup;

	len = 0;
	i = 0;
	while (src[len + 1])
	{
		len++;
	}
	dup = (char *)malloc(len);
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

// #include <stdio.h>
// int main()
// {
// 	char *str="meow meow meow";

// 	char *dup=ft_strdup(str);
// 	printf("%s\n",dup);

// 	printf("%p\n",&str);
// 	printf("%p\n",&dup);
// }
