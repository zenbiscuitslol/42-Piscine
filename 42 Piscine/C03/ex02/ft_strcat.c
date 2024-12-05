/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprejith <pprejith@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 17:12:42 by pprejith          #+#    #+#             */
/*   Updated: 2024/11/21 20:53:07 by pprejith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

/* #include <stdio.h>
int	main(void)
{
	char str[20]="meow";
	char *str1="meow meow";

	ft_strcat(str,str1);
	printf("%s",str);
}  */