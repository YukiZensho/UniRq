#include <stdlib.h>
#include <stdio.h>

int mystoi(char c[100]){
	int a=0,i=-1;
	while(c[++i]>=48)	a=a*10+c[i]-48;
	return a;
}
int main(){

	FILE * f;
	int s=0;
	char c[100];

	f=fopen("dummy","r");
	while(fgets(c, 100, f) != NULL){
		s+=mystoi(c);

	}
	printf("%i is the result",s);
}
