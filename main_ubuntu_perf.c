/*
	This main tests execution speed of asm functions
	Remove the first "_" on function call names in order to get MacOSX compatibility
	compile linux:
nasm -f elf64 ft_strcat.nasm;\
nasm -f elf64 ft_bzero.nasm;\
nasm -f elf64 ft_isalpha.nasm;\
nasm -f elf64 ft_isdigit.nasm;\
nasm -f elf64 ft_isalnum.nasm;\
nasm -f elf64 ft_isascii.nasm;\
nasm -f elf64 ft_isprint.nasm;\
nasm -f elf64 ft_toupper.nasm;\
nasm -f elf64 ft_tolower.nasm;\
nasm -f elf64 ft_puts.nasm;\
gcc -Wall -Wextra -Werror -o speedASM ft_strcat.o ft_bzero.o ft_isalpha.o ft_isdigit.o ft_isalnum.o ft_isascii.o ft_isprint.o ft_toupper.o ft_tolower.o ft_puts.o main_ubuntu_perf.c;\
gcc -Wall -Wextra -Werror -O3 -o speedASMO3 ft_strcat.o ft_bzero.o ft_isalpha.o ft_isdigit.o ft_isalnum.o ft_isascii.o ft_isprint.o ft_toupper.o ft_tolower.o ft_puts.o main_ubuntu_perf.c;\
gcc -Wall -Wextra -Werror -Ofast -o speedASMOfast ft_strcat.o ft_bzero.o ft_isalpha.o ft_isdigit.o ft_isalnum.o ft_isascii.o ft_isprint.o ft_toupper.o ft_tolower.o ft_puts.o main_ubuntu_perf.c; rm *.o;\
gcc -Wall -Wextra -Werror -o speedlib main_ubuntu_perf_secondary.c;\
gcc -Wall -Wextra -Werror -O3 -o speedlibO3  main_ubuntu_perf_secondary.c;\
gcc -Wall -Wextra -Werror -Ofast -o speedlibOfast main_ubuntu_perf_secondary.c;\
echo ;\
echo test de vitesse lib asm sans option de compilation :;\
time ./speedASM;\
echo ;\
echo "test de vitesse lib asm -O3 :";\
time ./speedASMO3;\
echo ;\
echo "test de vitesse lib asm -Ofast :";\
time ./speedASMOfast;\
echo ;\
echo "test de vitesse lib c sans option de compilation :";\
time ./speedlib;\
echo ;\
echo "test de vitesse lib c -O3 :";\
time ./speedlibO3;\
echo ;\
echo "test de vitesse lib c -Ofast :";\
time ./speedlibOfast;\
echo ;\
rm speedASM speedASMO3 speedASMOfast speedlib speedlibO3 speedlibOfast;


*/

void	_ft_strcat(char *str, char *str2);
void	_ft_bzero(char *str, unsigned int size);
int		_ft_isalpha(int c);
int		_ft_isdigit(int c);
int		_ft_isalnum(int c);
int		_ft_isascii(int c);
int		_ft_isprint(int c);
int		_ft_toupper(int c);
int		_ft_tolower(int c);
void	_ft_puts(char *str);


int		main ( void ) {
	int		i = 0;
	int		j = 0;
	char	str[10];


	/***********
	** strcat **
	***********/

/*

	while (i < 10000000) {
		j = 0;
		str[0] = 0;
		str[1] = 0;
		str[2] = 0;
		str[3] = 0;
		str[4] = 0;
		str[5] = 0;
		str[6] = 0;
		str[7] = 0;
		str[8] = 0;
		str[9] = 0;
		while (j < 9) {
			_ft_strcat(str, "a");
			j++;
		}
		i++;
	}

	i = 0;
	j = 0;
	str[0] = 0;
	str[1] = 0;
	str[2] = 0;
	str[3] = 0;
	str[4] = 0;
	str[5] = 0;
	str[6] = 0;
	str[7] = 0;
	str[8] = 0;
	str[9] = 0;

*/
	/**********
	** bzero **
	**********/
	j = 0;
	i = j;
	while (i < 100000000) {
		str[0] = 123;
		str[1] = 50;
		str[2] = 12;
		str[3] = 45;
		str[4] = 85;
		str[5] = 78;
		str[6] = 20;
		str[7] = 25;
		str[8] = 45;
		str[9] = 65;
		_ft_bzero(str, 10);

		i++;
	}
	i = j;
	str[0] = 0;
	str[1] = 0;
	str[2] = 0;
	str[3] = 0;
	str[4] = 0;
	str[5] = 0;
	str[6] = 0;
	str[7] = 0;
	str[8] = 0;
	str[9] = 0;

	return (0);
}