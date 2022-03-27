#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    int pos = 0;
    int cnt = 1;

    getline(cin, s);

    while ((pos = s.find(" ", pos)) != string::npos) {
        ++cnt;
        ++pos;
    }

    cout << cnt;

    return 0;
}