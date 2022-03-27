#include<iostream>
#include <cmath>

using namespace std;

int main() {
	char a1,b1;
	long a,b,c,x0,y0,D,x1,x2;
	cin >> a >> b >> c;
	x0=(-1*b)/(2*a);
	y0=(4*a*c-pow(b,2)/(4*a));
	D=(b*b-(4*a*c))*-1;
	x1=(-1*b+pow(D,0.5)/(2*a));
	x2=(-1*b-pow(D,0.5)/(2*a));
	cout << "Координаты вершины парабулы : " << x0 << " " << y0 << "\n";
	cout << "Дискриминант : " << D << "\n";
	if (D<=0){
		cout << "Не пересекается с осью X";
	}
	else{
		cout << "Точки пересечения с осью X : " << x1 << " " <<  x2;
	}
}