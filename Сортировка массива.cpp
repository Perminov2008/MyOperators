#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,d,e=9999,u=0;
    cin >> a;
    vector <int> c;
    for (int i=0;i<a;i++){
    	cin >> d;
    	c.push_back(d);
	}
	cin >> b;
	for (int j=0;j<a;j++){
    	if (abs(b-c[j])<e){
    		e=abs(b-c[j]);
    		u=c[j];
		}
	}
	cout << u;
}