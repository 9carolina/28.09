//imprimir 10 nombres  
#include<stdio.h>
#include<stdlib.h>
int main(){
	int n;
	printf("Ingrese un numero del 1-10 para imprimir un nombre, si quiere todos, ingrese 11 para imprimir todos: ");
	scanf("%d", &n);
	
	switch(n){
		case 1:
			printf("Benito");break;
		case 2:	
			printf("Diego");break;
		case 3:
			printf("Ian");break;
		case 4:
			printf("Juan");break;
		case 5:
			printf("Pablo");break;
		case 6:
			printf("Andres");break;
		case 7:
			printf("Nicolas");break;
		case 8:
			printf("Antonio");break;
		case 9:
			printf("Ana");break;
		case 10:
			printf("Paula");break;
		case 11:
			printf("Benito\nDiego\nIan\nJuan\nPablo\nAndres\nNicolas\nAntonio\nAna\nPaula\n");break;
		default:
			printf("No ingreso una opcion valida");
			break;
	}
	
	return 0;
}
