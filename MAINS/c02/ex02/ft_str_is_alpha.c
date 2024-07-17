#include <stdio.h>
#include <string.h>

int     ft_str_is_alpha(char *str)
{
        int     i;

        i = 0;
        while (str[i] != 0)
        {
                while (str[i] > 'z' || (str[i] < 'a' && str[i] > 'Z') || str[i] < 'A')
                {
                        return (0);
                }
                i++;
        }
        return (1);
}

int main()
{       
        char str[] = "abv23bd";
        
        ft_str_is_alpha(str);
        printf("%d", ft_str_is_alpha(str));
        
        return (0);
}
