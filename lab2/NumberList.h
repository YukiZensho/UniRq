#ifndef NUMBERLIST.H
#define NUMBERLIST.H

class NumberList{
	int numbers[10];
	int count;
public:
	void init();
	bool Add( int x );

	void Sort();
	void Print();
}
#endif
