#include <unistd.h>
#include <stdio.h>

int     ft_strncmp(char *s1, char *s2, unsigned int n)
{
        unsigned int    i;

        i = 0;
        while (i < n - 1 && s1[i] != 0 && s2[i] != 0 && s1[i] == s2[i])
    	{
        	i++;
    	}
    	if (i == n)
    	{
        	return (s1[i] - s2[i]);
    	}
        return (s1[i] - s2[i]);
}
l
int     main()
{
		int r;
        r = 0;
        char s1[] = "aaaarrrrrrrrrrrrrggggggggg";
        char s2[] = "aaaadefghijklmnopq";

        r = ft_strncmp(s1, s2, 5);
        printf("%d", r);
}

