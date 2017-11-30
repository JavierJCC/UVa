#include <stdio.h>
#include <stdlib.h>

int numeroSonares(int a, int b);

int main(){
	int ciclo=0, entuno=0, entdos=0;
	int i=0;
		
			scanf("%d",&ciclo);
			if(ciclo != 0){
				for(i=0; i<ciclo; i++){
					scanf("%d %d", &entuno, &entdos);
					printf("%d\n",numeroSonares(entuno, entdos));
				}
			}
	return 0;
}
int numeroSonares(int columnas, int filas){
	int resuno, resdos, result, aux;
	columnas=columnas-2;
	filas=filas-2;
	resuno=columnas%3;
	resdos=filas%3;
	if(resuno == 0 && resdos == 0){
		result = (columnas/3) * (filas/3);
	}else if(resuno > 0 && resdos == 0){
		aux = (columnas / 3) + 1;
		result = aux * (filas / 3);
	}else if(resdos > 0 && resuno == 0){
		aux = (filas / 3) + 1;
		result =aux * (columnas / 3);
	}else if(resdos > 0 && resuno > 0){
		result = ((filas/3) + 1)*((columnas/3)+1);
	}
	return result;
}