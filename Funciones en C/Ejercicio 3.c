/*Escribir un programa que reciba una serie de cadenas de caracteres
como argumentos. El programa deberá concatenarlas y dar la vuelta a la cadena
resultante. La cadena que almacene la concatenación de los argumentos debe
utilizar la memoria justa y necesaria.*/

#include <stdio.h>
#include<string.h>

void invertircadena(char cadin[22]){
	int largo = strlen(cadin);
	int i;
	for (i=0; i < strlen(cadin) / 2; i++){
		char temp = cadin[i];
		cadin[i] = cadin[largo - i - 1];
		cadin[largo - i -1] = temp;
	}
}

int main () {
	
	char cad1[11], cad2[11];
	int longitud;
	printf("Ingrese una palabra (maximo 10 caracteres)\n");
	scanf("%s", cad1);
	printf("\nIngrese una segunda palabra (maximo 10 caracteres)\n");
	scanf("%s", cad2);
	strcat (cad1,cad2);
	printf("\nla nueva cadena concatenada es: %s\n", cad1);
	
	invertircadena(cad1);
	printf ("\nLa cadena invertida es: %s\n", cad1);
	
	
	system("pause");
	return 0;
}
