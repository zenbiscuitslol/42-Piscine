/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprejith <pprejith@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 16:06:09 by pprejith          #+#    #+#             */
/*   Updated: 2024/11/21 16:25:21 by pprejith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	check;

	check = 0;
	if (n <= 0)
	{
		return (0);
	}
	while (s1[check] && s2[check] && check < (n - 1))
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
	char str[]="jeow";
	char str1[]="leow";

	printf("%i", ft_strncmp(str,str1,1));
}  */