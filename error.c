#include "ft_putchar.h"


static size_t ft_strlen(const char *s)
{
    size_t i = 0;
    while (s[i])
        i++;
    return (i);
}

// int	main(int argc, char **argv)
// {
// 	t_data		data;
// 	t_error		exit_code;

// 	if (argc < 5 || argc > 6)
// 		return (ret_error(E_ARGS, NULL));
// 	if (check_input(argv))
// 		return (ret_error(E_ARGS, NULL));
// 	if (check_args(&data, argv))
// 		return (ret_error(E_ARGS, &data));
// 	if (to_malloc(&data))
// 		return (ret_error(E_MALLOC, &data));
// 	if (init_mutexes(&data))
// 		return (ret_error(E_MUTEX, &data));
// 	if (init_philos(&data))
// 		return (ret_error(E_THREAD, &data));
// 	exit_code = start_threads(&data);
// 	if (exit_code != NO_ERROR)
// 		return (exit_code);
// 	return (ret_error(NO_ERROR, &data));
// }


static char	*ft_strerror(t_error error)
{
	if (error == E_ARGS)
		return ("No input");
    if (error == E_LEGAL)
		return ("Illegal character");
	else if (error == E_WRITE)
		return ("write() failed");
	return (NULL);
}

int	return_error(t_error error)
{
	// if (l)
	// {
	// 	// if (l->s)
	// 	// 	free(l->s);
	// 	// if (l->rgb.b)
	// 	// 	free(l->rgb.b);
	// 	// if (l)
	// 		free(l);
	// }
	if (error != E_SUCCESS)
	{
		write(2, "Error: ", 7);
		write(2, ft_strerror(error), ft_strlen(ft_strerror(error)));
		write(2, "\n", 1);
		return (0);
	}
	return (1);
}