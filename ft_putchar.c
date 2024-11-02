#include "ft_putchar.h"

int	ft_legal(int c)
{
	int i = 0;

	while(LEGAL_CHARS[i] != '\0')
	{
		if (c == LEGAL_CHARS[i])
			return(E_SUCCESS);
		i++;
	}
	return(E_LEGAL);
}

int	ft_putchar(int c)
{
	if (!c)
		return_error(E_ARGS);
	if (ft_legal(c))
		return_error(E_LEGAL);
	if (!write(1, &c, 1))
		return_error(E_WRITE);
	return (E_SUCCESS);
}
int	main(void)
{
	ft_putchar('p');
	write(1, "\n", 1);
	ft_putchar('l');
	write(1, "\n", 1);
	ft_putchar('X');
	write(1, "\n", 1);
	ft_putchar('0');
	write(1, "\n", 1);
	ft_putchar('c');
	write(1, "\n", 1);
	return (0);
}