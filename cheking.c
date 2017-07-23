#include <stdio.h>
#include <stdlib.h>

int main(){
	int a[10], b[10], i, cond=1;
	char c;
	do{
		int y=1;
		if(scanf("%d %d %d %d %d",&a[0],&a[1],&a[2],&a[3],&a[4]) != 5)
			return 0;
		if(scanf("%d %d %d %d %d",&b[0],&b[1],&b[2],&b[3],&b[4]) != 5)
			return 0;
		for (int i = 0; i < 5; i++)
			y &= a[i] != b[i];
		puts(y ? "Y" : "N");

		
	}while(1);

 	return 0;
}
