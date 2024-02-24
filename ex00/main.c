
int	ft_atoi(const char *str)
{
	int	neg;
	int	number;
	int	i;

	i = 0;
	neg = 1;
	number = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
	
	{
		i++;
	}
	
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg *= -1;
		i++;
	}
	
	while (str[i] >= '0' && str[i] <= '9')
	{
		number = number * 10 + (str[i] - 48);
		i++;
	}
	return (number * neg);
}


int main(int argc, char const *argv[])
{
    int amount_digits;
    int n;
	char *arg_str_nums;
	int pos_nums_arg;


	// Pasar los argumentos a un array de ints
    
	if (argc == 2) // custom dict
	{
		arg_str_nums = argv[2];

		n = ft_atoi(arg_str_nums);

	}	
	else if (argc == 1) // base case
	{
		arg_str_nums = argv[1];

		// nums string to ints


		// ft_atoi with negative symobls later if n < 0 error

		n = ft_atoi(arg_str_nums);
		


	}
	// else
	// {
	// 	// TODO: error de argumentos invalidos 
	// }






    return (0);
}
