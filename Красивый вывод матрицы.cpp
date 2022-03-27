//Программа выводящая красиво матрицу
#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    long n,a=0;
    cin >> n;
    long long v[n][n];
    for (size_t i = 0; i < n; i++)
	{
	    for (size_t j = 0; j < n; j++)
	    {
	    	v[i][j]=a;
	    	a+=1000;
	        cout << setw(6) << v[i][j] << " ";
	    }
	    cout << "\n";
	}
}