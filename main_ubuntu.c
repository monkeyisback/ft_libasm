/*
	This main works on ubuntu
	Remove the first "_" on function call names in order to get MacOSX compatibility
	compile linux:
nasm -f elf64 ft_strcat.nasm; nasm -f elf64 ft_bzero.nasm; gcc -Wall -Wextra -Werror -o asmlib ft_strcat.o ft_bzero.o main_ubuntu.c

*/

#include <unistd.h>
#include <stdio.h>

void _ft_strcat(char *str, char *str2);
void _ft_bzero(char *str, unsigned int size);

int		main ( void ) {

	char	teststr[20];

	teststr[0] = 'b';
	teststr[1] = 'z';
	teststr[2] = 'e';
	teststr[3] = 'r';
	teststr[4] = 'o';
	teststr[5] = 'b';
	teststr[6] = 'z';
	teststr[7] = 'e';
	teststr[8] = 'r';
	teststr[9] = 'o';
	teststr[10] = 0;
	teststr[11] = 0;
	teststr[12] = 0;
	teststr[13] = 0;
	teststr[14] = 0;
	teststr[15] = 0;
	teststr[16] = 0;
	teststr[17] = 0;
	teststr[18] = 0;
	teststr[19] = 0;

	/* bzero tests */

	printf("\n ----------- \n");
	printf(" -- bzero -- \n");
	printf(" ----------- \n");
	printf(" - string : \n");
	write(1, teststr, 20);
	printf("\n - result (expected : bzeroo) : \n");
	_ft_bzero(teststr + 5, (unsigned int) 4);
	write(1, teststr, 10);
	printf("\n\n");

	/* strcat tests */

	printf(" ------------ \n");
	printf(" -- strcat -- \n");
	printf(" ------------ \n");
	printf(" - string : \n");
	write(1, teststr, 20);
	printf("\n - result (expected : bzerobzero) : \n");
	_ft_strcat(teststr, "bzero");
	write(1, teststr, 20);
	printf("\n\n");

	return ( 0 );

}