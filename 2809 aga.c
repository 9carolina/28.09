//imprimir 10 nombres y en orden aleatorio
#include<stdio.h>
#include<stdlib.h>
int main(){
	int n, m, r;
	srand(time(NULL));
	char text[10][10]= {"Juan", "Diego", "Paula", "Pablo", "Ian", "Carlos", "Benito", "Maximo", "Raul", "Jose" };
//10 textos y en cada texto 10 letras
	for (m=0;m<=10;m++){
		r = rand()%10;
	
		printf("%s\n", text[r]);
	}
	return 0;
}
