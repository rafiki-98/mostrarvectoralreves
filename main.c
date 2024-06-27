#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int vdato[6]={0,0,0,0,0,0};
	int c=0;
	
	for(c=0;c<=5;c++)
	{
	  printf("ingrese la posicion %d\n", c);
	  scandf("%d",&vdato[c]);
	}
	
	for(c=5;c>=0;c--)
	{
	  printf("los numeros de la posicion %d\n son %d\n", c,vdato[c]);
	}
	return 0;
}
