#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    vector<int> t(a + 2, 0);
    for (int i = 0; i < b; ++i){
        int l, r;
        cin >> l >> r;
        t[l]++;
        t[r + 1]--;
    }
    int d = 0;
    vector<int> s(a + 2);
    for (int i = 1; i < a + 2; ++i){
        d += t[i];
        s[i] = d;
    }
    for (int i = 0; i < c; ++i){
        int t;
        cin >> t;
        cout << s[t] << endl;
    }
}