#include <stdio.h>

int     ft_strlen(char *str)
{
        int     i;

        i = 0;
        while (str[i] != 0)
        {
                i++;
        }
        return (i);
}

int main()
{       
        int r;
        r = 0;
        char str[] = "Hellothisistest";
        r = ft_strlen(str);
        printf("%d", r);
}  
