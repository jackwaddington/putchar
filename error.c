#include "ft_putchar.h"

static size_t ft_strlen(const char *s)
{
    size_t i = 0;
    while (s[i])
        i++;
    return (i);
}

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
	if (error != E_SUCCESS)
	{
		write(2, "Error: ", 7);
		write(2, ft_strerror(error), ft_strlen(ft_strerror(error)));
		write(2, "\n", 1);
		return (0);
	}
	return (1);
}
