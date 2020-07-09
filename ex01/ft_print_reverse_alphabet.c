#include <unistd.h>

void     ft_putchar(char c);

void     ft_print_alphabet(void) {
	char    start;
    char	end;


	start = 'z';
	end = 'a';
	while (start >= end) {
		ft_putchar(start);
		start--;
	}

}

void    ft_putchar(char c) {
	write(1, &c, 1);
}

int     main(void) {
	ft_print_alphabet();
	return(0);
}


