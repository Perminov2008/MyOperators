#include <iostream>
using namespace std;

int IsPrime(int a) {
	int f=0;
   	for (int i=0;i<a/2;i++){
   		if (a%i==0){
   			return 1;
   			f=1;
   			break;
		   }
	   }
	if (f==0){
		return 2;
	}
}

int main() {
    int a;
    cin >> a;
    if (IsPrime(a)==1){
    	cout << "NO";	
	}
	else{
		cout << "YES";
	}
}