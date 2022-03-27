#include <iostream>
#include <set>

using namespace std;

int main()
{
	string a, b;
	int f;
	cout << "Введите строку: ";	
	getline(cin, a);	
	for(int i = 0; i < a.length(); i++){	
		if((int)a[i] >= 65 && (int)a[i] <= 90) 
			b += (char)(65 + (((((int)a[i]) - 65) + 3) % 26));		
		else if((int)a[i] >= 97 && (int)a[i] <= 122) 
			b += (char)(97 + (((((int)a[i]) - 97) + 3) % 26));		
		else 
			b += a[i];	
	  }	
	  cout << "Строка по шифру цезаря: ";
	  cout << b;	
	  return 0;
}