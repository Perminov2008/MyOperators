#include <iostream>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    char a[15][15];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j || i == n - 1 - j || i == n / 2 || j == n / 2) a[i][j] = '*';
            else a[i][j] = '.';
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}