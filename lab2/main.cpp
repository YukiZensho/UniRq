#include <iostream>


int main(){
	NumberList n;
	n.init();
	if(n.Add(5))
		n.Sort();
	n.Print();

	return 0;
}
