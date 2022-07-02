/*Escribir un programa que reciba como argumento un conjunto de números. Calcular la media mediante una función*/
#include <stdio.h>

int media (int sum){
int prom;	
prom = sum/8;
	
return prom;
}

int main (){
	int n, i, prome, suma, sarr = 0; 
	
	printf("este programa calcula el promedio de 8 numeros que el usuario ingrese\n\n");
	int numeros[8];
	for (i=0; i<8; i++){
		printf("Ingrese un numero %d: \n", i);
		scanf("%d", &numeros[i]);
		
		sarr +=numeros[i];
	}
	suma=sarr;
	prome=media(suma);
	printf("El promedio de los numeros es: %d\n\n", prome);
	
	system("pause");
	

	return 0;
	
	}
