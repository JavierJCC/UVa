#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
	char c[100];
	char p[10];
	int i=1;
	
	while(scanf("%s",c)){
		if(strcmp("#",c) == 0){
			return 0;
		}else if(strcmp("HELLO",c)==0){
			printf("Case %d: ENGLISH\n",i);
		}else if(strcmp("HOLA",c)==0){
			printf("Case %d: SPANISH\n", i);
		}else if(strcmp("HALLO", c)==0){
			printf("Case %d: GERMAN\n", i);
		}else if(strcmp("BONJOUR", c)==0){
			printf("Case %d: FRENCH\n", i);
		}else if(strcmp("CIAO", c)==0){
			printf("Case %d: ITALIAN\n", i);
		}else if(strcmp("ZDRAVSTVUJTE", c)==0){
			printf("Case %d: RUSSIAN\n", i);
		}else{
			printf("Case %d: UNKNOWN\n", i);
		}
		i++;
	}

	return 0;
}