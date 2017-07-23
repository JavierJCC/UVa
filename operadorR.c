#include <stdio.h>
	
int main(){
	int i, comp1, comp2, j=0;
		scanf("%d",&i);
		fflush(stdin);
		
		if (i>14)
		return 0;

		do{
			scanf("%d %d",&comp1, &comp2);
			fflush(stdin);
			if(comp1 == comp2)
				printf("=\n");
			else if(comp1 > comp2)
				printf(">\n");
			else if (comp1 < comp2){
				printf("<\n");
			} 
			j++;
		}while(j < i);
	return 0;
}