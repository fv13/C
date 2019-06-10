#include <stdio.h>

int main(){




int TAM=10;
int datos[TAM][TAM],i,j;
	for(i=0;i<TAM;i++){
	for(j=0;j<TAM;j++){
			datos[i][j]=i+j;
			printf("%d\t",datos[i][j]);
	}
	printf("\n");
	}



return 0;
}
