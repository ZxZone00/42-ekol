/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkocak <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 20:51:43 by fkocak            #+#    #+#             */
/*   Updated: 2022/10/27 20:53:04 by fkocak           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>
 #include <stdio.h>*/
int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 32 && str[i] <= 126))
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
int main()
{
	char str[] = "asdadc";
	printf("%d", ft_str_is_printable(str));
}
*/
