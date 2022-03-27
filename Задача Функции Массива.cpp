// Пррогамма проверяющая элементы массива.
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

bool Is(long n)
{
   for(long i=2; i*i <= n; i++)
     	if (n%i==0) 
		 	return false;
   return true;
}
 
int main() {
    long a,x,ravno_x=0;
    long long sum=0,umn=1,del=1,max=0,min=99999;
    cin >> a;
    vector <long> chet;
    vector <long> nechet;
    vector <long> prost;
    vector <long> sost;
    vector <long> bolshe_x;
    vector <long> menshe_x;
    long b[a];
    cin >> x;
    for(long i=0;i<a;i++){
    	cin >> b[i];
    	if (b[i]==x){
    		ravno_x+=1;
		}
    	if (b[i]>x){
    		bolshe_x.push_back(b[i]);
		}
		if (b[i]<x){
    		menshe_x.push_back(b[i]);
		}
    	if (Is(b[i])==true){
    		prost.push_back(b[i]);
		}
		else{
			sost.push_back(b[i]);
		}
    	if (b[i]%2==0){
    		chet.push_back(b[i]);
		}
		else{
			nechet.push_back(b[i]);
		}
    	sum+=b[i];
    	umn*=b[i];
    	del/=b[i];
    	if (b[i]>max){
    		max=b[i];
		}
		if (b[i]<min){
			min=b[i];
		}
	}
	cout << "Элемены массива больше x: ";
	for (int z=0;z<bolshe_x.size();z++){
		cout << bolshe_x[z] << " ";
	}
	cout << "\nЭлемены массива меньше x: ";
	for (int z=0;z<menshe_x.size();z++){
		cout << menshe_x[z] << " ";
	} 
	cout << "\nКоличесво элементов массива равных x: ";
	cout << ravno_x;
	cout << "\nЧетные элементы массива: ";
	for (int z=0;z<chet.size();z++){
		cout << chet[z] << " ";
	}
	cout << "\nНечетные элементы массива: ";
	for (int o=0;o<nechet.size();o++){
		cout << nechet[o] << " ";
	}
	cout << "\nПростые элементы массива: ";
	for (int z1=0;z1<prost.size();z1++){
		cout << prost[z1] << " ";
	}
	cout << "\nСоставные элементы массива: ";
	for (int o1=0;o1<sost.size();o1++){
		cout << sost[o1] << " ";
	}
	cout << "\nСумма элементов массива:" << sum ;
	cout << "\nПеремножение всех элементов массива: " << umn ;
	cout << "\nДеление всех елементов массива: " << del ;
	cout << "\nМаксимальный элемент: " << min ;
	cout << "\nМинимальный элемент: " << max ;
}