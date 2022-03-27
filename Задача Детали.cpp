#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int a;
    cin >> a;
    vector <int> b(10);
    if (a<10){
    	cout << 1 << a << "\n";
    	return 0;
	}
	for (int i=9;i>=2;i--){
		while (a%i==0){
			a/=i;
			b[i]++;
		}
	}
	if (a==1){
		for (int i=2;i<=9;i++){
			while (b[i]>0){
				cout << i;
				b[i]--;
			}
		}
	}
	else{
		cout << "No solution\n";
	}
	return 0;
}