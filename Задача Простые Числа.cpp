#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
 
 
int main() {
    long a;
    long long sum=0,umn=1,del=1,max=0,min=9999;
    cin >> a;
    int b[a];
    for(long i=0;i<a;i++){
    	
    	cin >> b[i];
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
	cout << sum << "\n" << umn << "\n" << del << endl;
	cout << min << "\n" << max << endl;
}