#include <stdio.h>

void hola() {

	printf("!!!Hola Mundo!!!\r!!!Hello World!!!\n");
}
;

void intro_dato() {
	char cadena[50];
	printf("Introduzca cadena:\n");
	gets(cadena);
	printf("Has introducido: %s\n", cadena);

}

void cadena() {

	char cadena[2] = { "fv" };
	size_t size = sizeof(cadena);
	for (int i = 0; i < size; i++) {
		printf("%c\n", cadena[i]);

	}

}

void array_num() {

	int array[6] = { 5, 3, 2, 5, 2, 3 };
	//size_t size = sizeof(array);

	for (int i = 0; i < 6; i++) {
		printf( "%d\n", array[i]);
	}
}


void matriz() {

	int TAM = 10;
	int datos[TAM][TAM], i, j;
	printf("\n\nMatriz[10][10]:\n");
	for (i = 0; i < TAM; i++) {
		for (j = 0; j < TAM; j++) {
			datos[i][j] = i + j;
			printf("%d\t", datos[i][j]);
		}
		printf("\n");
	}


}



int main(void) {
	hola();
	//intro_dato();
	cadena();
	array_num();
	matriz();
}
