/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprejith <pprejith@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 13:19:47 by pprejith          #+#    #+#             */
/*   Updated: 2024/11/21 16:03:44 by pprejith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	check;

	check = 0;
	while (s1[check] && s2[check])
	{
		if (s1[check] != s2[check])
		{
			return (s1[check] - s2[check]);
		}
		check++;
	}
	return (s1[check] - s2[check]);
}

/* #include <stdio.h>
int	main(void)
{
	char str[]="meow";
	char str1[]="cat";

	printf("%i", ft_strcmp(str,str1));
} */