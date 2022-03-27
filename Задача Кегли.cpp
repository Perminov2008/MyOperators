#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, l, r;
    cin >> n >> k;
    vector<char> a;
    for(int i = 0; i < n; ++i){
        a.push_back('I');
    }
    for(int i = 0; i < k; ++i){
        cin >> l >> r;
        for(int j = l - 1; j < r; ++j)
            a[j] = '.';
    }
    for(auto i: a)
        cout << i;
    return 0;
}