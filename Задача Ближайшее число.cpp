#include <iostream>
#include <vector>

using namespace std;

int main()
{
   int n;
   cin >> n;
   vector<int> v(n);
   for (int i = 0; i < n; ++i){
       cin >> v[i];
   }
   for (int i = 0; i < n; ++i){
       bool f = false;
       for (int j = 0; j < i; ++j){
           if (v[i] == v[j]){
               f = true;
           }
       }
       for (int j = i + 1; j < n; ++j){
           if (v[i] == v[j]){
               f = true;
           }
       }
       if (f == false){
           cout << v[i] << " ";
       }
   }
}