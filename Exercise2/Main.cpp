#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

bool divisibleBySeven(int i)
{
	return ((i % 7) == 0);
}

int main()
{
	vector <int> numbers;

	for (int i = 1; i <= 1000000; i++)
	{
		numbers.push_back(i);
	}

	int count = count_if(numbers.begin(), numbers.end(), divisibleBySeven);
	std::cout << "There are " << count << " values that are evenly divisible by 7 between 1 and 1,000,000." << endl;

	system("pause");
}