#include <stdio.h>
#include <unistd.h>
#include <string.h>

char    *ft_strlowcase(char *str)
{       
        int     i;
        
        i = 0;
        while (str[i])
        {       
                if (str[i] >= 'A' && str[i] <= 'Z')
                {       
                        str[i] = str[i] + 32;
                }       
                i++;
        }       
        return (str);
}

int main()
{       
        char str[] = "AKFKFs";
        ft_strlowcase(str);
        printf("%s", ft_strlowcase(str));
}   