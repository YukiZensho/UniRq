#include <stdlib.h>
#include <stdio.h>

FILE * f;
int a=0,s=0;
char c;
int main(){
	f=fopen("dummy","r");
	while(c = getc(f) != EOF){
		c = fgetc(f);
		if(c!=' '&&c!='\n')
			{a=a*10+c-'0';}
		else{
			s+=a;a=0;}}
	printf("%i is the result",s);
}
