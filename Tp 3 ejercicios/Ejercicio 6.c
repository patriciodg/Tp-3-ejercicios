#include <stdio.h>
#include <conio.h>


int contar(char *vec, char caracter);


int main()
{
	char vec[50], caracter;
	int cantidad = 0;
	printf("Ingrese un arreglo de caracteres: ");
	gets(vec);
	system("cls");
	printf("Ingrese el caracter que desea contar: ");
	scanf("%c", &caracter);
	system("cls");
	cantidad = contar(vec, caracter);
	printf("La cantidad de veces que se repite el caracter %c en %s es %d", caracter, vec, cantidad);
	
}

int contar(char *vec, char caracter)
{
	int x, cont=0;
	
	for(x=0;x<50;x++)
	{
		if(*(vec+x)==caracter)
		{
			cont++;
		}
	}
	return cont;
}

