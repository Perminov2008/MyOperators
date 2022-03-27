#include <iostream>
using namespace std;
 
int _tmain(int argc, _TCHAR* argv[])
{
    int n;
    cin >> n;
    int* A = new int[n];
    for (int i = 0; i < n; i+=2)
    {
        A[i] = rand()% 100 * -1;
        A[i + 1] = rand() % 100;
    }
    for (int i = 0; i < n; i++)
        swap(A[i], A[rand() % n]);
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl << endl;
    int z = 0;
    for (int i = 0; i < n; i++)
    {
        if (A[i] % 2 == 0)
            z = A[i];
        break;
    }
    if (z != 0)
    {
        for (int i = 0; i < n; i++)
        {
            if (A[i] % 2 == 0 && A[i] < z)
                z = A[i];
 
        }
        cout<< z << endl << endl;
    }
    else
        cout << 0 << endl << endl;
    return 0;
}