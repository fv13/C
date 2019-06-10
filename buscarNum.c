#include <stdio.h>






int main (void){
	int lista[12];
	static int x=0;
printf("Introduce 13 numeros!\n");

for(int i =0;i<13;i++){
printf("Introduce num %d:\n", i);
scanf ("%d",&lista[i]);
}
printf("\n");

printf("Numero a buscar?\n");
scanf("%d",&x);

//printf("%d\n",x);
int cont=0;

	for (int j =0;j<13;j++){
		
	if (lista[j]==x){
		printf("Numero esta en la posicion %d.\n",j);
		}else{
		cont++;
			if(cont==13){
			printf("Numero no esta.\n");
			}
		
		}
	}
printf("Lista de numeros:\n");

	
	for (int j =0;j<13;j++){
		printf ("pos %2d: %d \n",j ,lista[j]);
}



	
	}





