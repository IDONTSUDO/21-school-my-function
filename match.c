/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarence <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/10 17:21:19 by llarence          #+#    #+#             */
/*   Updated: 2019/03/10 19:23:23 by llarence         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int proverca(s1, s2, flag1, flag2)
{
    int f1;
    int f2;
    int f3;
    f1 = flag1;
    f2 = flag2;
    while(s1[f1] = s2[f2])
    {
        if(s1[f1] = f2 && f1 != '\0')
        f2++;
    }
    f2 = f3;
    match(f3);
}

int	match(char *s1, char *s2)
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
		if (s1[flag1] == s2[flag2])
		{
			result++;
		}
        if(s2[flag2] == '*')
            proverca(*s1, *s2, flag1, flag2);
		flag1--;
		flag2--;
	}
	if (result == 0)
		return (0);
	if (result > 0)
		return (1);
}

int main()
{
    char s1[] = "121e31e3r";
    char s2[] = "123456789"; 
    printf("%i", match(s1, s2));
}