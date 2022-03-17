#ifndef	SORT
#define	SORT
#include <stdlib.h>
#include <stdio.h>
#include <string>
class sort{
	int e[100],q;
	public:

	void InsertSort(bool ascendent=false);

    void QuickSort(bool ascendent=false);

    void BubbleSort(bool ascendent=false);

	int  GetElementsCount(){
		return q;	
	}

    int  GetElementFromIndex(int index){
		return e[q];
	}

	sort(int q, int l, int h){
		this->q = q;
		while(q--)	this->e[q]=rand()%(h-l)+l;
	}
	sort(int q,int e[100]){
		this->q = q;
		while(this->q--)	this->e[this->q]=e[this->q];
		this->q=q;
	}
	sort(std::string s){
		this->q=0;
		int j=0;
		for(int i=0;i<s.size();i++)
			if(s[i]==','){
				for(;j<i;j++)
					this->e[this->q]=s[j]-'0';
				this->q+=1;}
				
	}
	void print(){
		for(int i=0;i<this->q;i++)
			printf("%i ",e[i]);
	}

};

#endif