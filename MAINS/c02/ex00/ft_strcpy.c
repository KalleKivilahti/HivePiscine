#include <unistd.h>
#include <string.h>
#include <stdio.h>

char    *ft_strcpy(char *dest, char *src)
{
        int     i;

        i = 0;
        while (src[i] != 0)
        {
                dest[i] = src[i];
                i++;
        }
        dest[i] = src[i];
        return (dest);
}

int main()
{
        char src[] = "Nobugs!";
        char dest[20];

        ft_strcpy(dest, src);
        printf("Copy: %s\n", dest);

        return 0;
}


