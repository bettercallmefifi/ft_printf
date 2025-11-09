#include "ft_printf.h"
#include <stdio.h>

int main()
{
	int a = 20;
	char str[] = "ferdaous";
	unsigned int	n = 54675497;
	void *ptr;
	ft_printf("%d la valeur de a et %s le nome de cette fille. %p.%u.\n",a, str, &ptr,n);
	printf("%d la valeur de a et %s le nome de cette fille. %p.%u\n",a, str, &ptr,n);
	return (0);
}