#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int evalua(int num);
int decenas(int num);

int main()
{
		int i, j=0, cases, num;

		scanf("%d",&cases);
		do{
			scanf("%d",&num);
			printf("%d\n",evalua(num));
			j++;
		}while(j < cases);

	return 0;
}

int evalua(int num){
	int aux=0, aux2=0;
	aux=(567*num)/9+7492;
	aux2=(aux*235)/47-498;
	aux2=decenas(aux2);
return aux2;
}

int decenas(int num){
	int aux, aux2, i;
	aux=num%100;
	if(aux <0)
		aux=aux*-1;
	for (i = 1; i < 10; i++){
		if(aux < (i*10)){
			break;
		}
	}
return i-1;
} 	
