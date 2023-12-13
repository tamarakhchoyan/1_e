#include <iostream>
int main()
{
	const int n = 7;
	int i;
	int count = 0;
	int a[n];
	for (i = 0; i < n; i++)
		std::cin >> a[i];
	for (i = 0; i < n; i++) {
		while (a[i] > 10)
			a[i] /= 10;
		if (a[i] == 3)
		{
			count++;
		}
	}
	std::cout << count;
	return 0;
}
