struct s_stock_str	*ft_strs_to_tab(int ac, char **av);
void ft_show_tab(struct s_stock_str *par);

int					main(void)
{
	char	*strs[4];
	char	*str1;
	char	*str2;
	char	*str3;
	char	*str4;
	int		size;

	str1 = "Yes";
	str2 = "this";
	str3 = "works";
	str4 = "FINALLY!";
	size = 4;
	strs[0] = str1;
	strs[1] = str2;
	strs[2] = str3;
	strs[3] = str4;
	ft_show_tab(ft_strs_to_tab(size, strs));
}
