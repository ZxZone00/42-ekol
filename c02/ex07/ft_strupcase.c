/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkocak <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 20:53:46 by fkocak            #+#    #+#             */
/*   Updated: 2022/10/27 20:56:00 by fkocak           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>
 #include <stdio.h>*/
char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
/*
int	main()
{
	char str[]= "furkan";
	printf("%s", ft_strupcase(str));
}
*/
