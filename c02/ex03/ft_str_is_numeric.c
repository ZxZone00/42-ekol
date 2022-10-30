/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkocak <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 19:41:28 by fkocak            #+#    #+#             */
/*   Updated: 2022/10/27 19:44:52 by fkocak           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>unistd
#include <stdio.h>*/
int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= '0' && str[i] <= '9'))
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
/*
int	main()
{
	char str[]= "09842357382";
	printf("%d", ft_str_is_numeric(str));
}
*/
