# include <iostream>
using namespace std;

int choque(int *x0,int *y0,int *x1,int *y1,int *a0,int *b0,int *a1,int *b1){
	return (*x1>=*a0&&*y1>=*b0 && *a1>=*x0&&*b1>=*y0)?1:0;		
}

int main() {
	int x0,y0,x1,y1;
	int a0,b0,a1,b1;
	cin >>x0>>y0>>x1>>y1>>a0>>b0>>a1>>b1;
	cout << choque(&x0,&y0,&x1,&y1,&a0,&b0,&a1,&b1) << endl;
}
//AWMO