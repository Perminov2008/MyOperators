#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, t, p;
    cin >> n;
    vector <int> a;
    for (int i = 0; i < n; i++){
        cin >> p;
        a.push_back(p);
    }
    t = a[n-1];
    for (int i = n-1; i > 0; i--) {
        p = a[i-1];
        a[i-1] = a[i];
        a[i] = p;
    }
    a[0] = t;
    for (auto n : a) {
        cout << n << " ";
    }
    return 0;
}