#ifndef	SORT
#define	SORT
#include <stdlib.h>
#include <stdio.h>
class sort{
	int e[100],q;
	public:
	sort(int q, int l, int h){
		this->q = q;
		while(q--)	this->e[q]=rand()%(h-l)+l;
	}
	void print(){
		for(int i=0;i<this->q;i++)
			printf("%i ",e[i]);
	}

};

#endif