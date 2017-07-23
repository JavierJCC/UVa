#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>

void evaluar(int a, int b, int c, int d);

int main (){
	int number, ent, enta, entb, i;
	int a, b;
	int c='1';
		
		do {
		    scanf("%d",&ent);
		    	if(ent != 0){ 
		    		scanf("%d %d", &a, &b); 
			    	for (i = 0; i < ent; i++)
			    	{	
			    		scanf("%d %d", &enta, &entb);
			    		evaluar(enta, entb, a, b);
			    		
			    	}
			    }else{
			    	c=0;	
			    }
			
		}while(c);
		
	return 0;
}

void evaluar(int a, int b, int c, int d){
	if(a == c || b==d){
		printf("divisa\n");
	}else if(a > c && b > d){
		printf("NE\n");
	}else if(a < c && b > d){
		printf("NO\n");
	}else if (a < c && b < d){
		printf("SO\n");
	}else if (a > c && b < d){
		printf("SE\n");
	}
}