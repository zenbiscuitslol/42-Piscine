/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprejith <pprejith@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 13:54:17 by pprejith          #+#    #+#             */
/*   Updated: 2024/11/20 19:11:23 by pprejith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	letter;

	letter = 0;
	while (src[letter])
	{
		dest[letter] = src[letter];
		letter++;
	}
	dest[letter] = '\0';
	return (dest);
}

/* #include <stdio.h>
int	main(void)
{
	char a[4]="meow";
	char b[4]="";

	ft_strcpy(b,a);

	int i=0;
	while(i<5)
	{
		printf("%c", b[i]);
		i++;
	}
	return (0);
} */