/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nmatch.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarence <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/10 18:26:51 by llarence          #+#    #+#             */
/*   Updated: 2019/03/10 19:24:15 by llarence         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	nmatch(char *s1, char *s2)
{
	int flag1;
	int flag2;
	int result;

	result = 0;
	flag1 = 1;
	flag2 = 1;
	while (s1[flag1] != '\0' && s2[flag2] != '\0')
	{
		flag1++;
		flag2++;
	}
	while (s1[flag1] >= 0 && s2[flag2] >= 0)
	{
		if (s1[flag1] == s2[flag2] || '*' == s2[flag2])
		{
			result++;
		}
		flag1--;
		flag2--;
	}
	return (result);
}
