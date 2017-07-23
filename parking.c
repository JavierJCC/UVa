#include <stdio.h>
#include <math.h>

int buscamayor(int a[], int len);
int buscamenor(int b[], int len);

int main()
{
	int casos, tiendas;
	int pos[100], i, j=0;
	int menor, mayor, result;

	
		if(scanf("%d",&casos) != 1)
			return 0;
	do
	{
		if (scanf("%d", &tiendas)!=1)
			return 0;

		for (i = 0; i < tiendas; ++i)
		{
			scanf("%d",&pos[i]);
		}
	menor=buscamenor(pos,tiendas);
	mayor=buscamayor(pos,tiendas);
	result=mayor-menor;
	printf("%d\n",result*2);
	j++;
	}while(j < casos);
	return 0;
}

int buscamayor(int a[], int len){
	int aux=0, i; 
		for(i=0; i<len; i++){
			if(aux < a[i]){
				aux=a[i];
			}
		}
	return aux;
}

int buscamenor(int b[], int len){
	int aux=111, i; 
		for(i=0; i<len; i++){
			if(aux > b[i]){
				aux= b[i];
			}
		}
	return aux;
}