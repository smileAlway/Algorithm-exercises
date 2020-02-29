#include <iostream>

const int MAX_N = 50;
const int MIN_N = 1;

int main()
{
	int n, m;
	int* k = new int[MAX_N];
	std::cout << "input n = ";
	std::cin >> n;
	if (n > MAX_N&& n < MIN_N)
	{
		std::cout << "over";
		return 0;
	}
	std::cout << "input m = ";
	std::cin >> m;
	for (int i = 0; i < n; i++)
	{
		std::cout << "input k" << "[" << i << "] value = ";
		std::cin >> k[i];
	}
	for (int i = 0; i < n; i++)
	{
		for (int o = 0; o < n; o++)
		{
			for (int p = 0; p < n; p++)
			{
				for (int a = 0; a < n; a++)
				{
					int temp = k[a] + k[p] + k[o] + k[i];
					if (temp == m)
					{
						std::cout << "YES";
						return 0;
					}
				}
			}
		}
	}
	std::cout << "NO";
	delete k;
	return 0;
}