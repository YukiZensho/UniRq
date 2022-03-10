#ifndef	CANVAS
#define	CANVAS
#include <math.h>

class canvas{
	int x[100][100],height,width;
	public:
		canvas(int width,int height){
			this->width=width;
			this->height=height;
		}
	void DrawCircle(int x, int y, int ray, char ch){
		for(int i=0;i<width;i++)
			for(int j=0;j<height;j++)
				if(sqrt((this->x[i][j]-x)*(this->x[i][j]-x)+(this->x[i][j]-y)*(this->x[i][j]-y))==ray)
					this->x[i][j]=ch;
	}
	
};

#endif
