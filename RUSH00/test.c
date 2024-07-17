 /* atoi: convert s to integer */
 int atoi(char s[])
 {
 
	int	 n;
	n = 0;
 	for (int i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
	{
 		n = 10 * n + (s[i] - '0');
	}
}


{
	int n = 0;
	int i = 0;
	while (s[i] >= '0' && s[i] <= '9')
	{
		n = 10 * n + (s[i] - '0');
	      	i++;	
	}
}
