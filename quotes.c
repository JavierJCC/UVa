#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char c[10000];
	int t, r=0, i;
	char *p;
		while(fgets(c, sizeof c, stdin)){
			t=strlen(c);
				for (i = 0; i < t; ++i)
				{
					if(c[i]=='"' && r==0){
						printf("``");
						r++;
					}else if (c[i]=='"' && r==1){
						printf("''");
						r--;
					}else{
						printf("%c",c[i]);
					}
				}	
		}
	
	return 0;
}