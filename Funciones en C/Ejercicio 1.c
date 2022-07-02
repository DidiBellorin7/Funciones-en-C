/*Escribir una función que sume dos números. 
Implemente un programa que la utilice.*/
#include <stdio.h>

int suma (int n1, int n2){
int resultado;
resultado = n1+n2;

return resultado;
}

int main (){
	int a, b, c;
	printf("Ingrese dos numeros: \n");
	scanf("%d", &a);
	scanf("%d", &b);
	c=suma(a, b);
	printf("El resultado de la suma es: %d\n\n", c);
	
	system("pause");
	return 0;
	
}
