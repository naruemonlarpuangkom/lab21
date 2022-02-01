#include<iostream>
using namespace std;
struct Rect{
	double x,y,w,h;
};

double overlap(Rect info1,Rect info2){
	
	double l1x=info1.x , l1y=(info1.y)-(info1.h) , r1x=(info1.x)+info1.w , r1y=info1.y , l2x=info2.x , l2y=(info2.y)-(info2.h) , r2x=(info2.x)+info2.w , r2y=info2.y;
	double x_lenght = min(r1x, r2x) - max(l1x, l2x);
    double y_lenght = (min(r1y, r2y) - max(l1y, l2y));
    double area;
    if( x_lenght > 0 && y_lenght > 0 )
    {
        area = x_lenght * y_lenght;
        return area;
    }else{
        return 0;
    }
}

int main(){
	Rect R1 = {-1,2,6.9,9.6};
Rect R2 = {0,0,1.2,2.5};
cout << overlap(R1,R2);
} 