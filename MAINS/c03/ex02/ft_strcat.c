#include <unistd.h>
#include <stdio.h>

char    *ft_strcat(char *dest, char *src)
{
        int     i;
        int     d_size;

        d_size = 0;
        i = 0;
        while (dest[d_size])
        {
                d_size++;
        }
        while (src[i])
        {       
                dest[d_size] = src [i];
                d_size++;
                i++;
        }       
        dest[d_size] = 0;
        return (dest);
}       

int main ()
{
	char src[] = " ranger";
    char dest[50] = "power";
    
    ft_strcat(dest, src);
    printf("%s", dest);
}
