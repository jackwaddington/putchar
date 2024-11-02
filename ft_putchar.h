#include <unistd.h>

typedef enum e_error
{
    E_SUCCESS,
    E_ARGS,
    E_LEGAL,
    E_WRITE,
}			t_error;


#define LEGAL_CHARS "0123456789.CALplcysp-, \n"

int	return_error(t_error error);

