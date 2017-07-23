#include <stdio.h>
#include <stdlib.h>

int salario(int a[]);

int main (){
	int i=1, j, cases, a[4], res;
	
		scanf("%d", &cases);	
	do{
		if (scanf("%d %d %d", &a[0], &a[1], &a[2]) != 3)
			return 0;
		res=salario(a);
		printf("Case %d: %d\n",i ,res);
		i++;	
	}while(i <= cases);	
	return 0;
}

int salario(int a[]){
	int i, j, b[4];
	int aux=0, aux2;
	for (j=0; j < 2 ;j++){
		for(i=0+j; i<3; i++){
			if(aux < a[i]){
				aux=a[i];
				aux2=a[j];
				a[j]=a[i];
				a[i]=aux2;
			}
		}
		aux=0;
	}
	return 	a[1];
}