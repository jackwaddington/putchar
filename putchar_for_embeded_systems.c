#include <unistd.h>

void	p(int c){write(1,&c,1);}

int	main()
{
	p(66);
}
