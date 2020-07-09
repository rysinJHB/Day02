#include <unistd.h>

void     ft_putchar(char c);

void     ft_print_numbers(void) {
	char    start;
	char    end;

	start = '0';
	end = '9';
	while (start<=end) {
		ft_putchar(start);
		start++;
	
	}
}

void    ft_putchar(char c) {
	write(1, &c, 1);
}

int     main(void) {
	ft_print_numbers();
	return(0);
}
