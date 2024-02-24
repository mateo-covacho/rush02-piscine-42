
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
void check_argument_validity(char *str,int *error_flag)
{
	int i;

	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			*error_flag = 1;
		i++;
	}
}

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
		i++;
	
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

int count_digits( int value )
{
    int result = 0;
    while( value != 0 ) {
       value /= 10;
       result++;
    }
    return result;
}

void fill_num_array(int *arr, int n)
{
	int	i;

	i = 0;
	while (arr[i]) 
		i++;
	while(n != 0)
	{
		arr[i] = 2;
		n = n / 10;
		i--;
	}
}

int main(int argc, char const *argv[])
{
    int n;
	char *str_arg_nums;
	int error;
	int *numbers_array;
	int i;

	error = 0;
	// Pasar los argumentos a un array de ints

	if (argc == 2)
		str_arg_nums = argv[1];
	else if (argc == 3)
		str_arg_nums = argv[2];


	n = ft_atoi(str_arg_nums);

	check_argument_validity(str_arg_nums, &error);


	printf("error: %i\n ", error);
	if (error)
	{
		write(1,"Error\n",6);
		return (1);
	}
	printf("\natoi results: %i\n", n);

	// chapter 2: mapear a array

	printf("digits: %i\n", count_digits(n));

	numbers_array = malloc(sizeof(int) * count_digits(n) + 1);
	numbers_array[count_digits(n) + 1] = '\0';
	i = count_digits(n) - 1;
	while (i >= 0)
	{	
		numbers_array[i] = n % 10;
		n = n / 10;
		i--;
	}
	printf("nums array pos 0: %i\n", numbers_array[2]);


    return (0);
}

