/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarence <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/04 15:43:23 by llarence          #+#    #+#             */
/*   Updated: 2019/03/04 15:57:33 by llarence         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int start;
	int i;
	int res;
	int negative;

	start = 0;
	while (str[start] != '\0' && (str[start] == ' ' || str[start] == '\t' ||
					str[start] == '\r' || str[start] == '\n'))
		start++;
	i = start;
	negative = 0;
	while (str[i] != '\0' && ((str[i] >= '0' && str[i] <= '9') ||
					(i == start && (str[i] == '-' || str[i] == '+'))))
	{
		if (str[i] == '-')
			negative = 1;
		if (str[i] == '0' && str[i] <= '9')
			res = (res * 10) + (str[i] - 48);
		++i;
	}
	if (negative)
		res *= -1;
	return (res);
}
