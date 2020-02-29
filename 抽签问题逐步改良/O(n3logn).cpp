#include <iostream>

const int MAX_N = 50;
const int MIN_N = 1;

bool binary_search(int x, int n, int k[])
{
	int right = n - 1;;
	int left = 0;
	while (right != left)
	{
		int temp = (right + left) / 2;
		if (k[temp] == x)
		{
			return true;
		}
		else if (k[temp] < x)
		{
			left = temp + 1;
		}
		else if (k[temp] > x)
		{
			right = temp - 1;
		}
		
	}
	return false;
}

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
				if (binary_search(m - k[i] - k[o] - k[p], n, k))
				{
					std::cout << "YES";
					return 0;
				}
			}
		}
	}
	std::cout << "NO";
	delete k;
	return 0;
}