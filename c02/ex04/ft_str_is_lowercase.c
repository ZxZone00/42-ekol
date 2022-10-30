/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkocak <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 19:46:00 by fkocak            #+#    #+#             */
/*   Updated: 2022/10/27 20:45:37 by fkocak           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>
 #include <stdio.h>*/
int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int    main()
{
    char str[] = "asdfadfsdgfdaf";
    printf("%d", ft_str_is_lowercase(str));
}
*/
