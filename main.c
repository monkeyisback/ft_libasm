/*

	This main works on ubuntu
	Remove the first "_" on function call names in order to get MacOSX compatibility
	Also modify makefile :)

*/
#include <stdio.h>

void ft_strcat(char *str, char *str2);

int		main ( void ) {

	char	teststr[10];

	teststr[0] = '1';
	teststr[1] = '1';
	teststr[2] = '1';
	teststr[3] = '1';
	teststr[4] = 0;
	teststr[5] = 'a';
	teststr[6] = 'z';
	teststr[7] = 'e';
	teststr[8] = 'r';
	teststr[9] = 0;


	printf("-- strcat output : \n");

	printf("%s\n", teststr);

	printf("strcat call : \n");
	_ft_strcat(teststr, "132");
	printf("%s\n", teststr);

	printf("-- end of strcat output : \n");

	return ( 0 );

}