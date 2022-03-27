#include <iostream>
#include <string>
 
using namespace std;
 
int main()
{
    string str, s, word;
    int max = 0;
    getline(cin, str);
    str += ' ';
    for (int i = 0; str[i]; i++)
    {
        s += str[i];
        if (!(isalpha(str[i])))
        {
            s.pop_back();
            if (s != "")
                if (s.length() > max)
                {
                    max = s.length();
                    word = s;
                }
            s = "";
        }
    }
    cout << word;
    cin.get();
    return 0;
}