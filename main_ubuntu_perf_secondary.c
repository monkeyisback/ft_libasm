/*

	do not care about this file, look at main_ubuntu_perf.care

*/
#include <unistd.h>
#include <string.h>

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
			strcat(str, "a");
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
		bzero(str, 10);

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