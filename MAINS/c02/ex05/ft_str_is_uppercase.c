#include <unistd.h>
#include <stdio.h>
#include <string.h>

int     ft_str_is_uppercase(char *str)
{
        int     i;

        i = 0;
        while (str[i] != 0)
        {
                while (str[i] < 'A' || str[i] > 'Z')
                {
                        return (0);
                }
                i++;
        }
        return (1);
}

int main()
{       
        char str[] = "SKQQJD";
        
        ft_str_is_uppercase(str);
        printf("%d", ft_str_is_uppercase(str));
        
        return (0);
}
