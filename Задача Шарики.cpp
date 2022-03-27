#include <iostream>
#include <cmath>
 
using namespace std;
 
int main()
{
	long long n, x, y, t, b, h;
	cin >> n;
	long long a[n], l, p;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	b = n;
	h = 0;
	while (h < 1000)
	{
		l = 0;
		p = 0;
		for (int i = p; i < b; i++)
		{
			if (a[i] == a[i+1])
			{
				l++;
			}
			else
			{
				p = l;
				l = 0;
				if (p >= 2) 
				{
					x = abs(p - i);
					y = p + 1;
					break;
				}
			}
		}
		if (p < 2) break;
		t = 0;
		while (t < y)
		{
			for (int i = x; i < b - t; i++)
			{
			a[i] = a[i+1];
			}
			t++;
		}
		b = b - t;
		h++;
	}
	cout << n - b;
}