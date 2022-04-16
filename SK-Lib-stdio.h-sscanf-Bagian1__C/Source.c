#pragma warning(disable:4996)

#include <stdio.h>
#include <conio.h>

/*
	Source by CPlusPlus (https://www.cplusplus.com)
	Modified For Learn by RK
	I.D.E : VS2019
*/

int main() {
	char sentence[] = "Dia berumur 11 tahun";
	char str[20];
	int i;

	sscanf(sentence, "%s %*s %d", str, &i);
	printf("%s -> %d\n", str, i);

	_getch();
	return 0;
}