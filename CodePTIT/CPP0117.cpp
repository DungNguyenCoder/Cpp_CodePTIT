#include <iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		long long n;
		cin >> n;
		long long tong;
		while (n >= 10)
		{
			tong = 0;
			while (n > 0)
			{
				tong += n % 10;
				n /= 10;
			}
			n = tong;
		}
		cout << tong << "\n";
	}
}