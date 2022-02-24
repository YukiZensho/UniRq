#include <iostream>
#include <fstream>
#include <stdlib.h>
using namespace std;

ifstream fin("dummy");
int a,s;
int main(){
	while(fin>>a)
		s+=a;
	printf("%i",s);
}
