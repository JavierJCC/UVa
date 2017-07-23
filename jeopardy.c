#include <stdio.h>
#include <string.h>

int main (){
	char c[10000];
	int t, i;
	while(fgets(c, sizeof c, stdin)){
		t=strlen(c);
		for (i = 0; i < t; ++i)
		{
			printf("%c",c[i]);
		}
	}	

	return 0;
}