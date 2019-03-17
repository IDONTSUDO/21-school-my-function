#include <unistd.h>



void ft_putchar(char c)
{
    write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	
}
int result(char flag)
{
    
}
int stek(char flag)
{
    
}
int sort(char *c)
{
    int flag;

    while(c[flag] != '\0')
    {
    if(*c == '*' && *c == '/' && *c == '-' && *c == '+' && *c ==  '(' && *c == ')')
        return(stek(c[flag]));
    if(*c >= '0' && *c <= '9')
        return(result(c[flag]));
    } 
    return(0);
}
int eval_expr(char *c)
{   
    sort(c);
}         


int main(int ac, char **av)
{
if (ac > 1)
{
ft_putnbr(eval_expr(av[1]));
ft_putchar('\n');
}
return (0);
}
