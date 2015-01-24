/*
	This main works on ubuntu
	Remove the first "_" on function call names in order to get MacOSX compatibility
	compile linux:
nasm -f elf64 ft_strcat.nasm;\
nasm -f elf64 ft_bzero.nasm;\
nasm -f elf64 ft_isalpha.nasm;\
nasm -f elf64 ft_isdigit.nasm;\
nasm -f elf64 ft_isalnum.nasm;\
nasm -f elf64 ft_isascii.nasm;\
gcc -Wall -Wextra -Werror -o asmlib ft_strcat.o ft_bzero.o ft_isalpha.o ft_isdigit.o ft_isalnum.o ft_isascii.o main_ubuntu.c; rm *.o;\
./asmlib;\
rm asmlib

*/

#include <unistd.h>
#include <stdio.h>

void	_ft_strcat(char *str, char *str2);
void	_ft_bzero(char *str, unsigned int size);
int		_ft_isalpha(int c);
int		_ft_isdigit(int c);
int		_ft_isalnum(int c);
int		_ft_isascii(int c);


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

	/* isalpha tests */
	printf(" ------------- \n");
	printf(" -- isalpha -- \n");
	printf(" ------------- \n");
	if (_ft_isalpha('a') == 0)
		printf("/!\\ erreur sur is alpha a\n");
	else if (_ft_isalpha('z') == 0)
		printf("/!\\ erreur sur is alpha z\n");
	else if (_ft_isalpha('A') == 0)
		printf("/!\\ erreur sur is alpha A\n");
	else if (_ft_isalpha('Z') == 0)
		printf("/!\\ erreur sur is alpha Z\n");
	else if (_ft_isalpha('0') != 0)
		printf("/!\\ erreur sur is alpha 0\n");
	else if (_ft_isalpha('9') != 0)
		printf("/!\\ erreur sur is alpha 9\n");
	else if (_ft_isalpha(' ') != 0)
		printf("/!\\ erreur sur is alpha ' '\n");
	else if (_ft_isalpha('/') != 0)
		printf("/!\\ erreur sur is alpha '/'\n");
	else if (_ft_isalpha(':') != 0)
		printf("/!\\ erreur sur is alpha ':'\n");
	else if (_ft_isalpha('@') != 0)
		printf("/!\\ erreur sur is alpha '@'\n");
	else if (_ft_isalpha('[') != 0)
		printf("/!\\ erreur sur is alpha '['\n");
	else if (_ft_isalpha('`') != 0)
		printf("/!\\ erreur sur is alpha '`'\n");
	else if (_ft_isalpha('{') != 0)
		printf("/!\\ erreur sur is alpha '{'\n");
	else
		printf("all good on is alpha");
	printf("\n\n");

	/* isdigit tests */
	printf(" ------------- \n");
	printf(" -- isdigit -- \n");
	printf(" ------------- \n");
	if (_ft_isdigit('a') != 0)
		printf("/!\\ erreur sur is digit a\n");
	else if (_ft_isdigit('z') != 0)
		printf("/!\\ erreur sur is digit z\n");
	else if (_ft_isdigit('A') != 0)
		printf("/!\\ erreur sur is digit A\n");
	else if (_ft_isdigit('Z') != 0)
		printf("/!\\ erreur sur is digit Z\n");
	else if (_ft_isdigit('0') == 0)
		printf("/!\\ erreur sur is digit 0\n");
	else if (_ft_isdigit('9') == 0)
		printf("/!\\ erreur sur is digit 9\n");
	else if (_ft_isdigit(' ') != 0)
		printf("/!\\ erreur sur is digit ' '\n");
	else if (_ft_isdigit('/') != 0)
		printf("/!\\ erreur sur is digit '/'\n");
	else if (_ft_isdigit(':') != 0)
		printf("/!\\ erreur sur is digit ':'\n");
	else if (_ft_isdigit('@') != 0)
		printf("/!\\ erreur sur is digit '@'\n");
	else if (_ft_isdigit('[') != 0)
		printf("/!\\ erreur sur is digit '['\n");
	else if (_ft_isdigit('`') != 0)
		printf("/!\\ erreur sur is digit '`'\n");
	else if (_ft_isdigit('{') != 0)
		printf("/!\\ erreur sur is digit '{'\n");
	else
		printf("all good on is digit");
	printf("\n\n");

	/* isalnum tests */
	printf(" ------------- \n");
	printf(" -- isalnum -- \n");
	printf(" ------------- \n");
	if (_ft_isalnum('a') == 0)
		printf("/!\\ erreur sur is alnum a\n");
	else if (_ft_isalnum('z') == 0)
		printf("/!\\ erreur sur is alnum z\n");
	else if (_ft_isalnum('A') == 0)
		printf("/!\\ erreur sur is alnum A\n");
	else if (_ft_isalnum('Z') == 0)
		printf("/!\\ erreur sur is alnum Z\n");
	else if (_ft_isalnum('0') == 0)
		printf("/!\\ erreur sur is alnum 0\n");
	else if (_ft_isalnum('9') == 0)
		printf("/!\\ erreur sur is alnum 9\n");
	else if (_ft_isalnum(' ') != 0)
		printf("/!\\ erreur sur is alnum ' '\n");
	else if (_ft_isalnum('/') != 0)
		printf("/!\\ erreur sur is alnum '/'\n");
	else if (_ft_isalnum(':') != 0)
		printf("/!\\ erreur sur is alnum':'\n");
	else if (_ft_isalnum('@') != 0)
		printf("/!\\ erreur sur is alnum '@'\n");
	else if (_ft_isalnum('[') != 0)
		printf("/!\\ erreur sur is alnum '['\n");
	else if (_ft_isalnum('`') != 0)
		printf("/!\\ erreur sur is alnum '`'\n");
	else if (_ft_isalnum('{') != 0)
		printf("/!\\ erreur sur is alnum '{'\n");
	else
		printf("all good on is alnum");
	printf("\n\n");

	/* isascii tests */
	printf(" ------------- \n");
	printf(" -- isascii -- \n");
	printf(" ------------- \n");
	if (_ft_isascii(0) == 0)
		printf("/!\\ erreur sur is ascii 0\n");
	else if (_ft_isascii(63) == 0)
		printf("/!\\ erreur sur is ascii 63\n");
	else if (_ft_isascii(127) == 0)
		printf("/!\\ erreur sur is ascii 127\n");
	else if (_ft_isascii(-1) != 0)
		printf("/!\\ erreur sur is ascii -1\n");
	else if (_ft_isascii(-127) != 0)
		printf("/!\\ erreur sur is ascii -127\n");
	else if (_ft_isascii(128) != 0)
		printf("/!\\ erreur sur is ascii 128\n");
	else if (_ft_isascii(255) != 0)
		printf("/!\\ erreur sur is ascii 255\n");
	else
		printf("all good on is ascii");
	printf("\n\n");

	return ( 0 );

}